CC=pcc
MAKE=make

test:
	@${MAKE} clean 
	@${MAKE} combined_check 
	@${MAKE} static_check 
	@${MAKE} shared_check  

combined:
	@${CC} -o combined main.c lib.c

combined_check: 
	@${MAKE} combined
	@./combined >/dev/null

static_lib:
	@$(CC) -c lib.c
	@ar r lib.a lib.o 2>/dev/null 

static:	
	@${MAKE} static_lib
	@${CC} -Wall -o static main.c lib.a

static_check: 
	@${MAKE} static
	@./static >/dev/null

shared_lib:
	@$(CC) -fPIC -c lib.c
#	$(CC) -dynamiclib -o liblib.dylib lib.o
	@$(CC) -shared -o liblib.so lib.o

shared:	
	@${MAKE} shared_lib
#	$(CC) -Wall -o shared main.c -L. -llib
	@$(CC)  -Wl,-rpath=. -o shared main.c -L. -llib

shared_check: 
	@${MAKE} shared 
	@./shared >/dev/null

clean:
	@rm -f lib.a liblib.dylib lib.o liblib.so combined static shared
