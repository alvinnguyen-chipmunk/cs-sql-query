######################### CS COMMON VARIABLE ###########################
if DEBUG
DEBUG_CFLAGS = -g -ggdb
else
DEBUG_CFLAGS =
endif
   
CS_SOURCES = include/cs_sql.h cs_sql.c

CS_includedir = $(includedir)/chipmunk

CS_include_HEADERS = include/cs_sql.h

CS_CFLAGS = $(DEBUG_CFLAGS) -std=c99 -D_BSD_SOURCE -D_DEFAULT_SOURCE -I$(srcdir)/include

CS_LDFLAGS = -version-info @CS_VERSION_INFO@

######################### CS SQL QUERY LIBTOOL LIBRARY  ########################
lib_LTLIBRARIES = libcssql.la
libcssql_la_SOURCES = ${CS_SOURCES}
libcssql_la_include_HEADERS = $(CS_include_HEADERS)
libcssql_la_includedir = $(CS_includedir)
libcssql_la_CFLAGS = $(CS_CFLAGS)
libcssql_la_LDFLAGS = $(CS_LDFLAGS)

######################## STYL SCANNER SSI STATIC LIBRARY ##########################
lib_LIBRARIES = libcssql.a
libcssql_a_SOURCES = ${CS_SOURCES}
libcssql_a_include_HEADERS = $(CS_include_HEADERS)
libcssql_a_includedir = $(CS_includedir)
libcssql_a_CFLAGS = $(CS_CFLAGS)
