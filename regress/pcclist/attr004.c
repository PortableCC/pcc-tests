/*
 * Date: Mon, 21 Sep 2015 21:41:24
 * From: Iain Hibbert
 * Subject: [Pcc] compiler error: fixnames2: 0xbb9096a8 (null)
 */

int foo(int) __attribute__ ((const));

int bar(int a)
{
        foo(a);
        return foo(a);
}

int main(int argc, char *argv[]) { return 0; }

int foo(int a) { return 0; }
