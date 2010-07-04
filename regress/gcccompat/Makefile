#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=

REGRESS_TARGETS = gcccompat001 

REGRESS_TARGETS_FAIL = 

test:  
	@echo " Running gcccompat tests: "  
.for TARGET in ${REGRESS_TARGETS}
	@printf  "   %-20s \t\t " "${TARGET}"
	@${CC} ${CFLAGS} -o ${TARGET}.out ${TARGET}.c 2>/dev/null && \
		./${TARGET}.out >/dev/null && \
		echo "passed" || echo "failed"
.endfor
.for TARGET2 in ${REGRESS_TARGETS_FAIL}
	@printf  "   %-20s \t\t " "${TARGET2}"
	@${CC} ${CFLAGS} -o ${TARGET2}.out ${TARGET2}.c 2>/dev/null && \
		echo "failed" || echo "passed" 
.endfor

page:
	@printf  "<h2> gcc compatibility tests </h2> \n" > gcccompat.log
	@printf  "<table width="300"> \n<tr><th>Test</th><th>Result</th></tr> \n" >> gcccompat.log
.for TARGET in ${REGRESS_TARGETS}
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "${TARGET}" >> gcccompat.log
	@${CC} ${CFLAGS} -o ${TARGET}.out ${TARGET}.c 2>/dev/null && \
		./${TARGET}.out >/dev/null && \
		printf "<td align=\"center\" bgcolor=\"green\" > %s </td></tr>\n" "passed" >> gcccompat.log || \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> gcccompat.log 
.endfor
.for TARGET2 in ${REGRESS_TARGETS_FAIL}
	@printf  "<tr><td bgcolor=\"#dcdcdc\"> %s </td>" "${TARGET2}" >> gcccompat.log
	@${CC} ${CFLAGS} -o ${TARGET2}.out ${TARGET2}.c 2>/dev/null && \
		printf "<td align=\"center\" bgcolor=\"red\" > %s </td></tr>\n" "failed" >> gcccompat.log || \
		printf "<td align=\"center\" bgcolor=\"green\"> %s </td></tr>\n" "passed" >> gcccompat.log  
.endfor
	@printf "</table>\n" >> gcccompat.log 



clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core
	/bin/rm -rf gcccompat.log

