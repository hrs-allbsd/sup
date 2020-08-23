#	$NetBSD: Makefile,v 1.3 2001/01/09 03:13:43 lukem Exp $

SUBDIR= lib sup supscan supfilesrv

.include <bsd.subdir.mk>

VERSION=	2.0.20140517
DISTFILEDIR?=	${.CURDIR}/sup-${VERSION}

clean:
	rm -rf ${DISTFILEDIR} sup-${VERSION}.tar.gz

distfile:
	mkdir -p ${DISTFILEDIR}
	cp -r Makefile Makefile.inc source ${SUBDIR} ${DISTFILEDIR}
	cd ${DISTFILEDIR}/.. && tar czvf ${.CURDIR}/sup-${VERSION}.tar.gz --exclude "*CVS*" ${DISTFILEDIR:T}
