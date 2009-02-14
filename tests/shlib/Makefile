all:	combined static shared

combined:
	$(CC) -Wall -o combined main.c lib.c

static:	static_lib
	$(CC) -Wall -o static main.c lib.a

shared:	shared_lib
#	$(CC) -Wall -o shared main.c -L. -llib
	$(CC) -Wall -Wl,-rpath=. -o shared main.c -L. -llib

static_lib:
	$(CC) -Wall -c lib.c
	ar r lib.a lib.o

shared_lib:
	$(CC) -Wall -c lib.c
#	$(CC) -dynamiclib -o liblib.dylib lib.o
	$(CC) -shared -o liblib.so lib.o
	chcon -t texrel_shlib_t liblib.so

clean:
	rm -f lib.a liblib.dylib lib.o combined static shared
