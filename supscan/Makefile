#	$NetBSD: Makefile,v 1.6 2002/09/18 13:31:56 lukem Exp $

.if defined(.FreeBSD)
MK_MAN=no
.else
NOMAN=	# defined
NO_MAN=	# defined
.endif

PROG=	supscan
SRCS=	supscan.c scan.c

.PATH:	${.CURDIR}/../source

DPADD=	${LIBSUP}
LDADD=	${SUPLIB}

.include <bsd.prog.mk>

