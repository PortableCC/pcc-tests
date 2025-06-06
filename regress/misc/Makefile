#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=
LOG=misc.log
MAKE=make

REGRESS_TARGETS = arith001 char001 func001 str001 ucn001 array001
OPTIM_TARGETS = optim001 optim002
PIC_TARGETS = pic001

REGRESS_TARGETS_FAIL = 

test:  
	@echo " Running misc tests: "  
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET in ${OPTIM_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} -O ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET2 in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET2" ;\
		${CC} ${CFLAGS} -o $$TARGET2.out $$TARGET2.c 2>/dev/null && \
			echo "failed" || echo "passed" ;\
	done 
	@for TARGET in ${PIC_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
		printf  "   %-20s \t\t " "$$TARGET(PIC)" ;\
		${CC} ${CFLAGS} -fpic -o $$TARGET.out $$TARGET.c 2>/dev/null && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@cd shlib && ${MAKE} clean 
	@printf  "   %-20s \t\t " "shlib1" ;
	@cd shlib && ${MAKE} combined_check 2>/dev/null && \
			echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "shlib2" ;
	@cd shlib && ${MAKE} static_check 2>/dev/null && \
			echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "shlib3" ;
	@cd shlib && ${MAKE} shared_check 2>/dev/null && \
			echo "passed" || echo "failed" ;



page:
	@printf  "<h2> misc tests </h2> \n" > ${LOG}
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
	@cd shlib && ${MAKE} clean 
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "shlib1" >> ${LOG} ; 
	@cd shlib && ${MAKE} combined_check 1>/dev/null 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ../${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ../${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "shlib2" >> ${LOG} ;
	@cd shlib && ${MAKE} static_check 1>/dev/null 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ../${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ../${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "shlib3" >> ${LOG} ;
	@cd shlib && ${MAKE} shared_check 1>/dev/null 2>/dev/null && \
			printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ../${LOG} || \
			printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ../${LOG} ;
	@printf "</table>\n" >> ${LOG}



clean:
	cd shlib && ${MAKE} clean 
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}

