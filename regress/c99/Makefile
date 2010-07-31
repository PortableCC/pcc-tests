#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= -lm
LDFLAGS=
LOG=c99.log

REGRESS_TARGETS = arith001 arith002 \
						basic001 basic002 basic003 basic004 basic005 \
						comments001 \
						conversions001 \
						darray001 darray002 \
						digraph001 \
						enum001 \
						func001 func002 func003 \
						init001 init002 init003 init004 init005 init006 \
						init007 init008 init009 init010 init011 init012 \
						inline001  \
						oper001 oper002 \
						prep001 prep002 prep003 prep004 prep005 prep006 \
						scope001 scope002 scope003 scope004 \
						trigraph001 \
						types001 types002 types003 \
						limits001 limits002 


REGRESS_TARGETS_FAIL = arith999 \
						comments999 comments998 \
						const999 const998 const997 \
						func999 func998 func997 func996 \
						oper999 \
						prep999 \
						scope999	scope998 scope997 scope996 

test:  
	@echo " Running C99 tests: " 
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET2 in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET2" ;\
		${CC} ${CFLAGS} -o $$TARGET2.out $$TARGET2.c 2>/dev/null && \
			echo "failed" || echo "passed" ;\
	done 
	@printf  "   %-20s \t\t " "inline999" ;
	@${CC} ${CFLAGS} -c inline999.out inline999.c 2>/dev/null && \
		echo "failed" || echo "passed" ;\


page:
	@printf  "<h2> C99 tests </h2> \n" > ${LOG}
	@printf  "<table width="300"> \n<tr><th>Test</th><th>Result</th></tr> \n" >> ${LOG}
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "$$TARGET" >> ${LOG};\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;\
	done
	@for TARGET2 in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "$$TARGET2" >> ${LOG};\
		${CC} ${CFLAGS} -o $$TARGET2.out $$TARGET2.c 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} ;\
	done
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "inline999" >> ${LOG};
	@${CC} ${CFLAGS} -c inline999.out inline999.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} ;
	@printf "</table>\n" >> ${LOG}

clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}


