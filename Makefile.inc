#	$NetBSD: Makefile.inc,v 1.8 2003/04/03 17:56:52 christos Exp $

.include <bsd.own.mk>

PREFIX?=/usr/local

CFLAGS+=-UCMUCS -UCMU -UMACH -DVAR_TMP -DHAS_DAEMON -DHAS_POSIX_DIR \
	-DLIBWRAP -DHAS_FPARSELN -DHAS_VIS -DHAS_FGETLN -DEE_XXX \
	-I${.CURDIR}/../source \
	-I${.CURDIR}/../lib \
	-I${.CURDIR}/../sys

.if empty(.MAKEFLAGS:M-V*)
PRINTOBJDIR=    ${MAKE} -V .OBJDIR
.else
PRINTOBJDIR=    echo # prevent infinite recursion
.endif

LIBSUPDIR!=	cd ${.CURDIR}/../lib && ${PRINTOBJDIR}
LIBSUP=	${LIBSUPDIR}/libsup.a
SUPLIB=	-L${LIBSUPDIR} -lsup

NOMANCOMPRESS=	# defined
NO_MANCOMPRESS=	# defined
BINDIR=	${PREFIX}/bin
MANDIR=	${PREFIX}/man/man
