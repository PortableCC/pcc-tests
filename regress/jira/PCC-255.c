/*
 * PCC-255
 * cpp ran out of macro space
 */

#define FOO(F)	foo(F)

#define BAR	bar	/* with comment
			 * on two lines */

FOO(BAR)
