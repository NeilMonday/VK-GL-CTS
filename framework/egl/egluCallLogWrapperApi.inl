/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 *
 * Generated from Khronos EGL API description (egl.xml) revision 28861.
 */
eglw::EGLBoolean								eglBindAPI							(eglw::EGLenum api);
eglw::EGLBoolean								eglBindTexImage						(eglw::EGLDisplay dpy, eglw::EGLSurface surface, eglw::EGLint buffer);
eglw::EGLBoolean								eglChooseConfig						(eglw::EGLDisplay dpy, const eglw::EGLint *attrib_list, eglw::EGLConfig *configs, eglw::EGLint config_size, eglw::EGLint *num_config);
eglw::EGLint									eglClientWaitSync					(eglw::EGLDisplay dpy, eglw::EGLSync sync, eglw::EGLint flags, eglw::EGLTime timeout);
eglw::EGLBoolean								eglCopyBuffers						(eglw::EGLDisplay dpy, eglw::EGLSurface surface, eglw::EGLNativePixmapType target);
eglw::EGLContext								eglCreateContext					(eglw::EGLDisplay dpy, eglw::EGLConfig config, eglw::EGLContext share_context, const eglw::EGLint *attrib_list);
eglw::EGLImage									eglCreateImage						(eglw::EGLDisplay dpy, eglw::EGLContext ctx, eglw::EGLenum target, eglw::EGLClientBuffer buffer, const eglw::EGLint *attrib_list);
eglw::EGLSurface								eglCreatePbufferFromClientBuffer	(eglw::EGLDisplay dpy, eglw::EGLenum buftype, eglw::EGLClientBuffer buffer, eglw::EGLConfig config, const eglw::EGLint *attrib_list);
eglw::EGLSurface								eglCreatePbufferSurface				(eglw::EGLDisplay dpy, eglw::EGLConfig config, const eglw::EGLint *attrib_list);
eglw::EGLSurface								eglCreatePixmapSurface				(eglw::EGLDisplay dpy, eglw::EGLConfig config, eglw::EGLNativePixmapType pixmap, const eglw::EGLint *attrib_list);
eglw::EGLSurface								eglCreatePlatformPixmapSurface		(eglw::EGLDisplay dpy, eglw::EGLConfig config, void *native_pixmap, const eglw::EGLAttrib *attrib_list);
eglw::EGLSurface								eglCreatePlatformWindowSurface		(eglw::EGLDisplay dpy, eglw::EGLConfig config, void *native_window, const eglw::EGLAttrib *attrib_list);
eglw::EGLSync									eglCreateSync						(eglw::EGLDisplay dpy, eglw::EGLenum type, const eglw::EGLAttrib *attrib_list);
eglw::EGLSurface								eglCreateWindowSurface				(eglw::EGLDisplay dpy, eglw::EGLConfig config, eglw::EGLNativeWindowType win, const eglw::EGLint *attrib_list);
eglw::EGLBoolean								eglDestroyContext					(eglw::EGLDisplay dpy, eglw::EGLContext ctx);
eglw::EGLBoolean								eglDestroyImage						(eglw::EGLDisplay dpy, eglw::EGLImage image);
eglw::EGLBoolean								eglDestroySurface					(eglw::EGLDisplay dpy, eglw::EGLSurface surface);
eglw::EGLBoolean								eglDestroySync						(eglw::EGLDisplay dpy, eglw::EGLSync sync);
eglw::EGLBoolean								eglGetConfigAttrib					(eglw::EGLDisplay dpy, eglw::EGLConfig config, eglw::EGLint attribute, eglw::EGLint *value);
eglw::EGLBoolean								eglGetConfigs						(eglw::EGLDisplay dpy, eglw::EGLConfig *configs, eglw::EGLint config_size, eglw::EGLint *num_config);
eglw::EGLContext								eglGetCurrentContext				(void);
eglw::EGLDisplay								eglGetCurrentDisplay				(void);
eglw::EGLSurface								eglGetCurrentSurface				(eglw::EGLint readdraw);
eglw::EGLDisplay								eglGetDisplay						(eglw::EGLNativeDisplayType display_id);
eglw::EGLint									eglGetError							(void);
eglw::EGLDisplay								eglGetPlatformDisplay				(eglw::EGLenum platform, void *native_display, const eglw::EGLAttrib *attrib_list);
eglw::__eglMustCastToProperFunctionPointerType	eglGetProcAddress					(const char *procname);
eglw::EGLBoolean								eglGetSyncAttrib					(eglw::EGLDisplay dpy, eglw::EGLSync sync, eglw::EGLint attribute, eglw::EGLAttrib *value);
eglw::EGLBoolean								eglInitialize						(eglw::EGLDisplay dpy, eglw::EGLint *major, eglw::EGLint *minor);
eglw::EGLBoolean								eglMakeCurrent						(eglw::EGLDisplay dpy, eglw::EGLSurface draw, eglw::EGLSurface read, eglw::EGLContext ctx);
eglw::EGLenum									eglQueryAPI							(void);
eglw::EGLBoolean								eglQueryContext						(eglw::EGLDisplay dpy, eglw::EGLContext ctx, eglw::EGLint attribute, eglw::EGLint *value);
const char *									eglQueryString						(eglw::EGLDisplay dpy, eglw::EGLint name);
eglw::EGLBoolean								eglQuerySurface						(eglw::EGLDisplay dpy, eglw::EGLSurface surface, eglw::EGLint attribute, eglw::EGLint *value);
eglw::EGLBoolean								eglReleaseTexImage					(eglw::EGLDisplay dpy, eglw::EGLSurface surface, eglw::EGLint buffer);
eglw::EGLBoolean								eglReleaseThread					(void);
eglw::EGLBoolean								eglSurfaceAttrib					(eglw::EGLDisplay dpy, eglw::EGLSurface surface, eglw::EGLint attribute, eglw::EGLint value);
eglw::EGLBoolean								eglSwapBuffers						(eglw::EGLDisplay dpy, eglw::EGLSurface surface);
eglw::EGLBoolean								eglSwapInterval						(eglw::EGLDisplay dpy, eglw::EGLint interval);
eglw::EGLBoolean								eglTerminate						(eglw::EGLDisplay dpy);
eglw::EGLBoolean								eglWaitClient						(void);
eglw::EGLBoolean								eglWaitGL							(void);
eglw::EGLBoolean								eglWaitNative						(eglw::EGLint engine);
eglw::EGLBoolean								eglWaitSync							(eglw::EGLDisplay dpy, eglw::EGLSync sync, eglw::EGLint flags);
