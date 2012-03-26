#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=
LOG=jira.log

REGRESS_TARGETS =	PCC-21 PCC-23 PCC-33 PCC-45 PCC-47 PCC-57 \
			PCC-62 PCC-63 PCC-65 PCC-68 PCC-69 PCC-70 PCC-77 \
			PCC-84 PCC-85 PCC-97 PCC-101 PCC-123 PCC-125 \
			PCC-129 PCC-131 PCC-135 PCC-138 PCC-149 PCC-152 \
			PCC-154 PCC-155 PCC-157 PCC-158 \
			PCC-160 PCC-165 PCC-169 PCC-170 PCC-176 \
			PCC-376 PCC-377 PCC-378 \
			PCC-380 PCC-382 PCC-383 PCC-385

REGRESS_TARGETS_FAIL = PCC-161 

test:  
	@echo " Running tests from jira bug tracker : "  
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
	@printf  "   %-20s \t\t " "PCC-70" ;
	@${CC} ${CFLAGS} -o PCC-70.out -c PCC-70.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "PCC-159" ;
	@${CC} ${CFLAGS} -o PCC-159.out -c PCC-159.c 2>/dev/null && \
		echo "passed" || echo "failed" ;


page:
	@printf  "<h2> jira bug tracker tests </h2> \n" > ${LOG}
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
			printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> ${LOG} ;\
	done
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " PCC-70 " >> ${LOG} ;
	@${CC} ${CFLAGS} -o PCC-70.out -c PCC-70.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " PCC-159 " >> ${LOG} ;
	@${CC} ${CFLAGS} -o PCC-159.out -c PCC-159.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf "</table>\n" >> ${LOG}



clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}

