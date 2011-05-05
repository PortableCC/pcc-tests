/*
 * test effects of #pragma pack()
 *
 * output should be the same when compiled with pcc as gcc
 */

#include <sys/types.h>
#include <stddef.h>
#include <stdio.h>

#define	PRAGMA(s)	_Pragma (#s)

#define	S(size, align)		\
PRAGMA(pack(align))		\
struct s##_##size##_##align {	\
	int##size##_t	a;	\
	int##size##_t	b;	\
	int##size##_t	c;	\
};

#define	D(size)		\
	S(size, 0)	\
	S(size, 1)	\
	S(size, 2)	\
	S(size, 4)	\
	S(size, 8)	\
	S(size, 16)

#define	O(size, align)						\
	printf("s_%d_%-2d = %d, %d, %d, %d\n", size, align,	\
		offsetof(struct s##_##size##_##align, a),	\
		offsetof(struct s##_##size##_##align, b),	\
		offsetof(struct s##_##size##_##align, c),	\
		sizeof(struct s##_##size##_##align));

#define P(size)		\
	O(size, 0)	\
	O(size, 1)	\
	O(size, 2)	\
	O(size, 4)	\
	O(size, 8)	\
	O(size, 16)

D(8)
D(16)
D(32)
D(64)

int
main(int ac, char *av[])
{
	P(8)
	P(16)
	P(32)
	P(64)

	return 0;
}
