#	$NetBSD: Makefile,v 1.9 2003/10/14 11:49:52 tron Exp $

NOLINT= # defined
NOPIC=  # defined
NOPROFILE=# defined
NO_LINT= # defined
NO_PIC=  # defined
NO_PROFILE=# defined

LIB=	sup

SRCS=	scm.c scmio.c stree.c log.c supmsg.c netcryptvoid.c
SRCS+=	atoo.c errmsg.c expand.c ffilecopy.c filecopy.c \
	nxtarg.c path.c quit.c run.c salloc.c skipto.c

.PATH:	${.CURDIR}/../source

# only needed during build
install::

.include <bsd.lib.mk>

