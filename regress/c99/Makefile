#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=

REGRESS_TARGETS = arith001 arith003  \
						basic001 basic002 basic003 basic004 \
						comments001 \
						const001 \
						conversions001 \
						darray001 darray002 \
						enum001 enum002 \
						func001 func002 func003 func004 \
						init001 init002 init003 init004 init005 init006 \
						init007 init008 init009 init010 init011 init012 \
						init013 init014 init015 init016 init017 init018 \
						inline001  \
						oper001 \
						prep001 prep002 prep003 prep004 prep005 prep006 \
						scope001 scope002 scope003 scope004 \
						switch001 \
						types001 

REGRESS_TARGETS_FAIL = arith999 \
						comments999 \
						const999 const998 \
						func999 func998 func997 \
						init999 init998 \
						inline999 \
						oper999 \
						prep999 \
						scope999	scope998 scope997 scope996 \
						switch999 switch998 

test:  
	@echo " Running C99 tests: "  
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

