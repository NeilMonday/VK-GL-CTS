# -*- coding: utf-8 -*-

from common import *
from khr_util.format import indentLines, commandParams, commandArgs
import khr_util.registry
from itertools import imap, chain

def virtualMemberDecl (command):
	return "virtual %s\t%s\t(%s) const\t= 0;" % (
		command.type,
		getFunctionMemberName(command.name),
		commandParams(command))

def concreteMemberDecl (command):
	return "%s\t%s\t(%s) const;" % (
		command.type,
		getFunctionMemberName(command.name),
		commandParams(command))

def memberImpl (command):
	template = """
{returnType} FuncPtrLibrary::{memberName} ({paramDecls}) const
{{
	{maybeReturn}m_egl.{memberName}({arguments});
}}"""
	return template.format(
		returnType		= command.type,
		mangledName		= getFunctionMemberName(command.name),
		paramDecls		= commandParams(command),
		maybeReturn		= "return " if command.type != 'void' else "",
		memberName		= getFunctionMemberName(command.name),
		arguments		= commandArgs(command))

def initFunctionEntry (command):
	return "dst->%s\t= (%sFunc)\tloader->get(\"%s\");" % (
		getFunctionMemberName(command.name),
		command.name,
		command.name)

def getExtOnlyIface (registry, api, extensions):
	spec = khr_util.registry.InterfaceSpec()

	for extension in registry.extensions:
		if not khr_util.registry.getExtensionName(extension) in extensions:
			continue

		if not khr_util.registry.extensionSupports(extension, api):
			continue

		spec.addExtension(extension, api)

	return khr_util.registry.createInterface(registry, spec, api)

def commandLibraryEntry (command):
	return "\t{ \"%s\",\t(deFunctionPtr)%s }," % (command.name, command.name)

def genStaticLibrary (registry):
	genCommandLists(registry, commandLibraryEntry,
					check		= lambda api, version: api == 'egl' and version in set(["1.4", "1.5"]),
					directory	= EGL_WRAPPER_DIR,
					filePattern	= "eglwStaticLibrary%s.inl",
					align		= True)

def gen (registry):
	defaultIface	= getDefaultInterface()
	noExtIface		= getInterface(registry, 'egl', VERSION)
	extOnlyIface	= getExtOnlyIface(registry, 'egl', EXTENSIONS)

	genCommandList(defaultIface,	virtualMemberDecl,	EGL_WRAPPER_DIR, "eglwLibrary.inl", True)
	genCommandList(defaultIface,	concreteMemberDecl,	EGL_WRAPPER_DIR, "eglwFuncPtrLibraryDecl.inl", True)
	genCommandList(defaultIface,	memberImpl,			EGL_WRAPPER_DIR, "eglwFuncPtrLibraryImpl.inl")

	genCommandList(noExtIface,		initFunctionEntry,	EGL_WRAPPER_DIR, "eglwInitCore.inl", True)
	genCommandList(extOnlyIface,	initFunctionEntry,	EGL_WRAPPER_DIR, "eglwInitExtensions.inl", True)

	genStaticLibrary(registry)
