void
func0(void)
{
	printf("no args\n");
}

void
func1(char c)
{
	printf("char arg: %c\n", c);
}

void
func2(short s)
{
	printf("short arg: %x\n", s);
}

void
func3(int i)
{
	printf("int arg: %x\n", i);
}

void
func4(long l)
{
	printf("long arg: %lx\n", l);
}

void
func5(long long ll)
{
	printf("long long arg: %llx\n", ll);
}

void
func6(char c, short s)
{
	printf("char arg: %c\n", c);
	printf("short arg: %x\n", s);
}

void
func7(char c, int i)
{
	printf("char arg: %c\n", c);
	printf("int arg: %x\n", i);
}

void
func8(char c, long l)
{
	printf("char arg: %c\n", c);
	printf("long arg: %lx\n", l);
}

void
func9(char c, long long ll)
{
	printf("char arg: %c\n", c);
	printf("long long arg: %llx\n", ll);
}

void
func10(short s, int i)
{
	printf("short arg: %x\n", s);
	printf("int arg: %x\n", i);
}

void
func11(short s, long l)
{
	printf("short arg: %x\n", s);
	printf("long arg: %lx\n", l);
}

void
func12(short s, long long ll)
{
	printf("short arg: %x\n", s);
	printf("long long arg: %llx\n", ll);
}

void
func13(int i, long l)
{
	printf("int arg: %x\n", i);
	printf("long arg: %lx\n", l);
}

void
func14(int i, long long ll)
{
	printf("int arg: %x\n", i);
	printf("long long arg: %llx\n", ll);
}

void 
func15(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	printf("int arg: %x\n", a);
	printf("int arg: %x\n", b);
	printf("int arg: %x\n", c);
	printf("int arg: %x\n", d);
	printf("int arg: %x\n", e);
	printf("int arg: %x\n", f);
	printf("int arg: %x\n", g);
	printf("int arg: %x\n", h);
	printf("int arg: %x\n", i);
}

void
func16(long long a, long long b, long long c, long long d, long long e)
{
	printf("long long arg: %llx\n", e);
	printf("long long arg: %llx\n", d);
	printf("long long arg: %llx\n", c);
	printf("long long arg: %llx\n", b);
	printf("long long arg: %llx\n", a);
}

void
func17(int a, long long b, long long c, long long d, long long e)
{
	printf("int arg: %x\n", a);
	printf("long long arg: %llx\n", b);
	printf("long long arg: %llx\n", c);
	printf("long long arg: %llx\n", d);
	printf("long long arg: %llx\n", e);
}

int
main()
{
	printf("---\n");
	func0();
	printf("---\n");
	func1('G');
	printf("---\n");
	func2(0xabcd);
	printf("---\n");
	func3(0xabcdef01);
	printf("---\n");
	func4(0x10fedcba);
	printf("---\n");
	func5(0x12345678fafafafa);
	printf("---\n");
	func6('G',0xabcd);
	printf("---\n");
	func7('G', 0xabcdef01);
	printf("---\n");
	func8('G', 0x10fedcba);
	printf("---\n");
	func9('G', 0x12345678fafafafa);
	printf("---\n");
	func10(0xabcd, 0xabcdef01);
	printf("---\n");
	func11(0xabcd, 0x10fedcba);
	printf("---\n");
	func12(0xabcd, 0x12345678fafafafa);
	printf("---\n");
	func13(0xabcdef01, 0x10fedcba);
	printf("---\n");
	func14(0xabcdef01, 0x12345678fafafafa);
	printf("---\n");
	func15(1,2,3,4,5,6,7,8,9);
	printf("---\n");
	func16(-128,-256,-512,-1024,-2048);
	printf("---\n");
	func17(-1,-2,-3,-4,-5);
}
