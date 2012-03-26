/*
 * PCC-380
 * cpp: EBLOCK sync error
 */

#define warning(msg, ...) do {		\
	dprint((msg), ## __VA_ARGS__);	\
} while(0)

#define WARN(fmt, ...) do {		\
	warning((fmt), ## __VA_ARGS__);	\
} while(0)

static void dprint(char *fmt, ...) { }

static void foo(int d)
{
	WARN("%d\n",
		d);
}

int main(int argc, char *argv[]) { return 0; }
