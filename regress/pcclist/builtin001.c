/*
 * Date: Tue, 1 Sep 2015 11:34:59
 * From: Iain Hibbert
 * Subject: [Pcc] __builtin_clz() causes major internal compiler error
 *
 * fails with
 *   major internal compiler error: test.c, line 3
 */

void foo(void)
{   
	__builtin_clz(0);
}

int main(int argc, char *argv[]) { return 0; }
