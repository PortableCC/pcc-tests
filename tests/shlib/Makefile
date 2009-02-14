all:	combined static shared

combined:
	$(CC) -o combined main.c lib.c

static:	static_lib
	$(CC) -o static main.c lib.a

shared:	shared_lib
	$(CC) -o shared main.c -L. -llib

static_lib:
	$(CC) -c lib.c
	ar r lib.a lib.o

shared_lib:
	$(CC) -c lib.c
	$(CC) -dynamiclib -o liblib.dylib lib.o

clean:
	rm -f lib.a liblib.dylib lib.o combined static shared
