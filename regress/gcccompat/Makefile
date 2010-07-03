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

clean:
	/bin/rm -rf *.out 
	/bin/rm -rf *.core

