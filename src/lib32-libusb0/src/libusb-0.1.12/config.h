/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

#define LINUX_API 1
#define BSD_API 0
#define DARWIN_API 0
#define DUMMY_API 0

/* #undef HAVE_OLD_DEV_USB_USB_H */

#define HAVE_LIMITS_H 1
#define HAVE_UNISTD_H 1
#define HAVE_VALUES_H 1

#define LIBUSB_MAJOR_VERSION 0
#define LIBUSB_MINOR_VERSION 1
#define LIBUSB_MICRO_VERSION 12
#define LIBUSB_INTERFACE_AGE 4
#define LIBUSB_BINARY_AGE 8


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have 'vprintf' but do have '_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the 'memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <values.h> header file. */
#define HAVE_VALUES_H 1

/* Define to 1 if you have the 'vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "libusb"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "libusb"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libusb 0.1.12"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libusb"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.1.12"

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.1.12"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to empty if 'const' does not conform to ANSI C. */
/* #undef const */
