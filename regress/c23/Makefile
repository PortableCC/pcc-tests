#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= -lm
LDFLAGS=
LOG=c23.log

REGRESS_TARGETS = constexpr001


REGRESS_TARGETS_FAIL =

# pcc is too liberal for these functions
# do not test them for now
#IGNORE_FAIL = prep998 init998 func997 func996 \
#	const999 const998 const997 arith999
#	@printf  "   %-20s \t\t " "darray999" ;
#	@${CC} ${CFLAGS} -o darray999.out darray999.c darray999_p2.c >/dev/null 2>/dev/null && \
#		echo "failed" || echo "passed" ;


test:  
	@echo " Running C23 tests: " 
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
		${CC} ${CFLAGS} -o $$TARGET2.out $$TARGET2.c 2>/dev/null 1>&2 && \
			echo "failed" || echo "passed" ;\
	done 

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


