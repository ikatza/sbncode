#
# This is an example GNUmakefile for my packages
#
PACKAGE_NAME = Algorithm

# specific names for this package
SOURCES = $(wildcard *.cxx)
FMWK_HEADERS = LinkDef.h stack_trace.h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
HEADERS_DEST = flashmatch/$(PACKAGE_NAME)
#IMPS = $(wildcard *.inl)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell flashmatch-config --includes)

#LDFLAGS += -L$(shell root-config --libdir) -lMinuit

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

include $(FMATCH_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
include $(FMATCH_BASEDIR)/Makefile/GNUmakefile.CORE

pkg_build: # nothing extra to do in this package
pkg_clean: # nothing extra to do in this package

