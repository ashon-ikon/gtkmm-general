##
##
##
AC_INIT([glade-loader], [0.0.1], [com.ashon-associates.com.glade.loader])
AM_INIT_AUTOMAKE([-Wall foreign])
# Check that we have C++ support
AC_PROG_CXX

# Specify where the configuration header defines will be:
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
#AC_ARG_WITH([youtube],
#    AS_HELP_STRING([--enable-youtube], [Enable YouTube Support]))

#AS_IF([test "$with_youtube" = "xyes"], [Nothing much],
#    AC_MSG_ERROR([YouTube requirements failed!]))

# Check that we have all Gtk Requirements
PKG_CHECK_MODULES([GTKMM], [gtkmm-3.0 >= 3.8.0])

AC_CONFIG_FILES([
    Makefile
    src/Makefile
])
AC_OUTPUT
