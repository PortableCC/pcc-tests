#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=

test:  
	@echo " C Compiler is: ${CC} "  
	@echo " Using C Flags: ${CFLAGS} "  
	@echo " Using LD Flags: ${LDFLAGS} "  
	@cd c99 && make test 
	@cd gcccompat && make test 

clean:
	cd c99 && make clean
	cd gcccompat && make clean

