/*
 * Date: Tue, 1 Sep 2015 11:34:44
 * From: Iain Hibbert
 * Subject: [Pcc] use of alias attribute, fails to produce output
 *
 * fails to compile, producing no output
 */

void foo (int);

void A_foo (int a)
{
}

void foo (int) __attribute__ ((alias("A_foo")));

int main(int argc, char *argv[]) { return 0; }
