/*
 * Date: Mon, 6 Jul 2015 20:11:56
 * From: Iain Hibbert
 * Subject: Re: [Pcc] Some recent fixes.
 *
 * fails with bad terminal
 */

#define FOO     (defined(__FOO__))

#if !FOO
int main(int argc, char *argv[]) { return 0; }
#else
#error __FOO__ is not defined
#endif
