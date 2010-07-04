#	$Id$
#
# Makefile for pcc regression tests.
#

CC=pcc
CFLAGS= 
LDFLAGS=
PCCVERSION=`pcc --version`
DATE=`date`

test:  
	@echo " C Compiler is: ${CC} "  
	@echo " Using C Flags: ${CFLAGS} "  
	@echo " Using LD Flags: ${LDFLAGS} "  
	@cd c99 && make test 
	@cd gcccompat && make test 

page:
	@cd c99 && make page
	@cd gcccompat && make page
	@printf "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n" > regress.html
	@printf "<html><head> \n<title> Pcc regression tests page </title>\n </head>" >>regress.html
	@printf "<body text=\"#000000\" bgcolor=\"#ffffff\"> \n" >> regress.html
	@printf "<h1>PCC regression test page <h1> \n<h2>%s</h2>\n" "${PCCVERSION}" >> regress.html
	@cat c99/c99.log >> regress.html 
	@cat gcccompat/gcccompat.log >> regress.html 
	@printf "<h3>Generated on %s </h3>\n" "${DATE}" >> regress.html
	@printf "</body></html> \n" >> regress.html
	@printf "regress.html page generated \n"

clean:
	cd c99 && make clean
	cd gcccompat && make clean
	rm -f regress.html

