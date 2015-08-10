/*
 * Date: Sun, 12 Jul 2015 22:27:54
 * From: Iain Hibbert
 * Subject: [Pcc] pcc recent fixes
 *
 * definition error, with GCC style
 */

#define AML_SYSERRX(eval, fmt, args...) errx(eval, fmt, args)

int main(int argc, char *argv[]) { return 0; }

