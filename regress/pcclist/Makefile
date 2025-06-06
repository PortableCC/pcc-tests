#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=
LOG=pcclist.log

REGRESS_TARGETS = asm001 asm002 \
		attr001 attr002 attr003 \
		basic001 basic003 basic004 basic005 basic007 \
		builtin001 builtin002 \
		fields001 fields002 \
		func003 func004 func005 func006 func009 \
		init001 init003 init004 init005 init006 init007 init008 \
		init009 init010 init011 init012 init013 init014 \
		pragma001 \
		prep001 prep002 prep003 prep004 prep005 prep006 prep007 \
		prep008 prep009 prep010 prep011 prep012 prep013 prep014 \
		prep015 prep016 prep017 prep018 prep019 prep020 \
		scope001 \
		strings001 strings002 \
		types001 types002 \
		extension001 

REGRESS_TARGETS_FAIL = init999 init998 init997 

test:  
	@echo " Running tests from pcc-list: "  
	@for TARGET in ${REGRESS_TARGETS} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET" ;\
		${CC} ${CFLAGS} -o $$TARGET.out $$TARGET.c 2>/dev/null 1>&2 && \
			./$$TARGET.out >/dev/null && \
			echo "passed" || echo "failed" ;\
	done 
	@for TARGET2 in ${REGRESS_TARGETS_FAIL} ;\
	do \
		printf  "   %-20s \t\t " "$$TARGET2" ;\
		${CC} ${CFLAGS} -o $$TARGET2.out $$TARGET2.c 2>/dev/null 1>&2 && \
			echo "failed" || echo "passed" ;\
	done 
	@printf  "   %-20s \t\t " "basic002" ;
	@${CC} ${CFLAGS} -fpic -O -S -o basic002.out basic002.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "basic006" ;
	@${CC} ${CFLAGS} -Wc,-xinline -o basic006.out basic006.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "func001" ;
	@${CC} ${CFLAGS} -Wc,-xtemps,-xinline -o func001.out func001.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "func002" ;
	@${CC} ${CFLAGS} -Wl,--fatal-warnings -o func002.out func002.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "func007" ;
	@${CC} ${CFLAGS} -Werror -Wc,-xtemps,-xinline -o func007.out func007.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "init002" ;
	@${CC} ${CFLAGS} -fPIC -fstack-protector -o init002.out init002.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "attr004" ;
	@${CC} ${CFLAGS} -fPIC -o attr004.out attr004.c 2>/dev/null && \
		echo "passed" || echo "failed" ;
	@printf  "   %-20s \t\t " "func008" ;
	@${CC} ${CFLAGS} -fPIC -o func008.out func008.c 2>/dev/null && \
		echo "passed" || echo "failed" ;



page:
	@printf  "<h2> pcc-list tests </h2> \n" > ${LOG}
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
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " basic002 " >> ${LOG} ;
	@${CC} ${CFLAGS} -fpic -O -S -o basic002.out basic002.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " basic006 " >> ${LOG} ;
	@${CC} ${CFLAGS} --Wc,-xinline -o basic006.out basic006.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " func001 " >> ${LOG} ;
	@${CC} ${CFLAGS} -Wc,-xtemps,-xinline -o func001.out func001.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " func002 " >> ${LOG} ;
	@${CC} ${CFLAGS} -Wl,--fatal-warnings -o func002.out func002.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " func007 " >> ${LOG} ;
	@${CC} ${CFLAGS} -Werror -Wc,-xtemps,-xinline -o func007.out func007.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " init002 " >> ${LOG} ;
	@${CC} ${CFLAGS} -fPIC -fstack-protector -o init002.out init002.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " attr004 " >> ${LOG} ;
	@${CC} ${CFLAGS} -fPIC -o attr004.out attr004.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" " func008 " >> ${LOG} ;
	@${CC} ${CFLAGS} -fPIC -o func008.out func008.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> ${LOG} || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> ${LOG} ;
	@printf "</table>\n" >> ${LOG}



clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf ${LOG}

