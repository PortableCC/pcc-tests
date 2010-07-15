#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=
LOG=gcccompat.log

REGRESS_TARGETS = attribute001 attribute002 \
						extension001 extension002 

REGRESS_TARGETS_FAIL = 

test:  
	@echo " Running gcc compatibility tests: "  
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


page:
	@printf  "<h2> gcc compatibility tests </h2> \n" > ${LOG}
	@printf  "<table width="300"> \n<tr><th>Test</th><th>Result</th></tr> \n" >> ${LOG}
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " $$TARGET " >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;\
	done
	@for TARGET2 in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "$$TARGET2" >> ${LOG} ;\
		${CC} ${CFLAGS} -o $$TARGET2.out $$TARGET2.c 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} || \
			printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG}  ;\
	done
	@printf "</table>\n" >> ${LOG}



clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}

