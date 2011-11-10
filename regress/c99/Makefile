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
						basic007 \
						comments001 \
						conversions001 \
						darray001 darray002 darray004 darray005 \
						digraph001 \
						enum001 \
						func001 func002 func003 func004 func005 \
						init001 init002 init003 init004 init005 init006 \
						init007 init008 init009 init010 init011 init012 \
						init013 init014 init015 init016 init017 init018 \
						inline001  \
						oper001 oper002 oper003 oper004 \
						prep001 prep002 prep003 prep004 prep005 prep006 \
						prep007 prep008 \
						scope001 scope002 scope003 scope004 \
						trigraph001 \
						types001 types002 types003 types004 types005 \
						types006 types007 types008 types009 \
						limits001 limits002 limits003 \
						sizeof001 sizeof002 


REGRESS_TARGETS_FAIL = arith999 \
						comments999 comments998 \
						const999 const998 const997 \
						func999 func998 func997 func996 func995 \
						init999 init998 \
						oper999 \
						parse999 \
						prep999 prep998 prep997 \
						scope999 scope998 scope997 scope996 \
						types999 types998 types997 types996 

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
	@printf  "   %-20s \t\t " "basic006" ;
	@${CC} ${CFLAGS} -o basic006.out basic006.c 2>/dev/null && \
		./basic006.out param1 PARAM2 Param3 >/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "darray003" ;
	@${CC} ${CFLAGS} -o darray003.out darray003.c darray003_p2.c >/dev/null 2>/dev/null && \
		./darray003.out >/dev/null 2>/dev/null&& \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "darray999" ;
	@${CC} ${CFLAGS} -o darray999.out darray999.c darray999_p2.c >/dev/null 2>/dev/null && \
		echo "failed" || echo "passed" ;
	@printf  "   %-20s \t\t " "inline999" ;
	@${CC} ${CFLAGS} -c inline999.out inline999.c 2>/dev/null && \
		echo "failed" || echo "passed" ;

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
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "basic006" >> ${LOG};
	@${CC} ${CFLAGS} -o basic006.out basic006.c 2>/dev/null && \
		./basic006.out param1 PARAM2 Param3 >/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "darray003" >> ${LOG};
	@${CC} ${CFLAGS} -o darray003.out darray003.c darray003_p2.c >/dev/null 2>/dev/null && \
		./darray003.out >/dev/null  2>/dev/null&& \
		printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "darray999" >> ${LOG};
	@${CC} ${CFLAGS} -o darray999.out darray999.c darray999_p2.c >/dev/null 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "inline999" >> ${LOG};
	@${CC} ${CFLAGS} -c inline999.out inline999.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} ;
	@printf "</table>\n" >> ${LOG}

clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}


