# Autoconf flags
ACLOCAL_AMFLAGS = -I m4

# Name of library 
lib_LTLIBRARIES = libcomplex_bessel.la

# List of needed source files
libcomplex_bessel_la_SOURCES = src/machine.for src/sp_besseli.cpp  src/sp_besselj.cpp  src/sp_besselk.cpp  src/sp_bessely.cpp  src/sp_complexBessel.cpp src/sp_hankel.cpp src/sp_airy.cpp src/zbesh.for
libcomplex_bessel_la_LDFLAGS = -version-info 0:0:0

# List of needed headers
library_includedir=$(includedir)/complex_bessel
library_include_HEADERS = src/fortranLinkage.h  src/sp_besseli.h  src/sp_besselj.h  src/sp_besselk.h  src/sp_bessely.h  src/sp_complexBessel.h  src/sp_hankel.h src/sp_airy.h

library2_includedir=$(includedir)
library2_include_HEADERS = complex_bessel.h