/*
 * Date: Wed, 2 Sep 2015 16:33:52
 * From: Iain Hibbert
 * Subject: [Pcc] sizeof() is not a constant
 *
 * code example from /usr/include/net/if.h on NetBSD, fails with
 * 'function illegal' and 'constant extpected'
 */

typedef unsigned int uint_t;

uint_t ui;

struct foo {
	int	a	__attribute__ (( __aligned__ ( sizeof(uint_t) ) ));
	int	b	__attribute__ (( __aligned__ ( sizeof(ui) ) ));
	int	c	__attribute__ (( __aligned__ ( 4 ) ));
};

int main(int argc, char *argv[]) { return 0; }
