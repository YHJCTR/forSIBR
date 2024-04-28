
#ifndef DENSECRF_EXPORT_H
#define DENSECRF_EXPORT_H

#ifdef DENSECRF_STATIC_DEFINE
#  define DENSECRF_EXPORT
#  define DENSECRF_NO_EXPORT
#else
#  ifndef DENSECRF_EXPORT
#    ifdef densecrf_EXPORTS
        /* We are building this library */
#      define DENSECRF_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define DENSECRF_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef DENSECRF_NO_EXPORT
#    define DENSECRF_NO_EXPORT 
#  endif
#endif

#ifndef DENSECRF_DEPRECATED
#  define DENSECRF_DEPRECATED __declspec(deprecated)
#endif

#ifndef DENSECRF_DEPRECATED_EXPORT
#  define DENSECRF_DEPRECATED_EXPORT DENSECRF_EXPORT DENSECRF_DEPRECATED
#endif

#ifndef DENSECRF_DEPRECATED_NO_EXPORT
#  define DENSECRF_DEPRECATED_NO_EXPORT DENSECRF_NO_EXPORT DENSECRF_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef DENSECRF_NO_DEPRECATED
#    define DENSECRF_NO_DEPRECATED
#  endif
#endif

#endif /* DENSECRF_EXPORT_H */
