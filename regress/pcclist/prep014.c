/*
 * Date: Mon, 28 Sep 2015 14:03:37
 * From: Iain Hibbert
 * Subject: [Pcc] cpp lost space after non-macro
 */

#define FOO(n)	n

struct FOO { int a; };

#define BAR(x)	struct FOO x = { 0 }

BAR(bar);

int main(int argc, char *argv[]) { return 0; }
