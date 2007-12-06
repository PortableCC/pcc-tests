#include <stdio.h>
#include <stdint.h>

#define TYPENAME(x) #x

#define CONV(ty1, ty2, FMT1, FMT2, IMIN, IMAX, UMAX)		\
do {								\
	ty1 dst1;						\
	ty2 n = IMIN;						\
	ty2 p = IMAX;						\
	ty2 n1 = -1;						\
	unsigned ty1 dst2;					\
	unsigned ty2 nu = 0;					\
	unsigned ty2 pu = UMAX;					\
								\
	printf("--- (u)%s -> (u)%s\n",				\
	    TYPENAME(ty2), TYPENAME(ty1));			\
								\
	dst1 = n;						\
	printf("%s result = (%s) %" FMT1 "d [0x%" FMT1 "x] = %" FMT2 "d [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), n, n, dst1, dst1);		\
	dst1 = p;						\
	printf("%s result = (%s) %" FMT1 "d [0x%" FMT1 "x] = %" FMT2 "d [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), p, p, dst1, dst1);		\
	dst1 = n1;						\
	printf("%s result = (%s) %" FMT1 "d [0x%" FMT1 "x] = %" FMT2 "d [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), n1, n1, dst1, dst1);		\
	dst1 = pu;						\
	printf("%s result = (unsigned %s) %" FMT1 "u [0x%" FMT1 "x] = %" FMT2 "d [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), pu, pu, dst1, dst1);		\
	dst1 = nu;						\
	printf("%s result = (unsigned %s) %" FMT1 "u [0x%" FMT1 "x] = %" FMT2 "d [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), nu, nu, dst1, dst1);		\
								\
	dst2 = n;						\
	printf("unsigned %s result = (%s) %" FMT1 "d [0x%" FMT1 "x] = %" FMT2 "u [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), n, n, dst2, dst2);		\
	dst2 = p;						\
	printf("unsigned %s result = (%s) %" FMT1 "d [0x%" FMT1 "x] = %" FMT2 "u [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), p, p, dst2, dst2);		\
	dst2 = n1;						\
	printf("unsigned %s result = (%s) %" FMT1 "d [0x%" FMT1 "x] = %" FMT2 "u [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), n1, n1, dst2, dst2);		\
	dst2 = pu;						\
	printf("unsigned %s result = (unsigned %s) %" FMT1 "u [0x%" FMT1 "x] = %" FMT2 "u [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), pu, pu, dst2, dst2);		\
	dst2 = nu;						\
	printf("unsigned %s result = (unsigned %s) %" FMT1 "u [0x%" FMT1 "x] = %" FMT2 "u [0x%" FMT2 "x]\n",	\
	    TYPENAME(ty1), TYPENAME(ty2), nu, nu, dst2, dst2);		\
} while (0)

void
test1()
{
	CONV(char, char, "", "", INT8_MIN, INT8_MAX, UINT8_MAX);
	CONV(char, short, "", "", INT16_MIN, INT16_MAX, UINT16_MAX);
	CONV(char, int, "", "", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(char, long, "", "l", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(char, long long, "", "ll", INT64_MIN, INT64_MAX, UINT64_MAX);
}

void
test2()
{
	CONV(short, char, "", "", INT8_MIN, INT8_MAX, UINT8_MAX);
	CONV(short, short, "", "", INT16_MIN, INT16_MAX, UINT16_MAX);
	CONV(short, int, "", "", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(short, long, "", "l", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(short, long long, "", "ll", INT64_MIN, INT64_MAX, UINT64_MAX);
}

void
test3()
{
	CONV(int, char, "", "", INT8_MIN, INT8_MAX, UINT8_MAX);
	CONV(int, short, "", "", INT16_MIN, INT16_MAX, UINT16_MAX);
	CONV(int, int, "", "", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(int, long, "", "l", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(int, long long, "", "ll", INT64_MIN, INT64_MAX, UINT64_MAX);
}

void
test4()
{
	CONV(long, char, "", "", INT8_MIN, INT8_MAX, UINT8_MAX);
	CONV(long, short, "", "", INT16_MIN, INT16_MAX, UINT16_MAX);
	CONV(long, int, "", "", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(long, long, "", "l", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(long, long long, "", "ll", INT64_MIN, INT64_MAX, UINT64_MAX);
}

void
test5()
{
	CONV(long long, char, "", "", INT8_MIN, INT8_MAX, UINT8_MAX);
	CONV(long long, short, "", "", INT16_MIN, INT16_MAX, UINT16_MAX);
	CONV(long long, int, "", "", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(long long, long, "", "l", INT32_MIN, INT32_MAX, UINT32_MAX);
	CONV(long long, long long, "", "ll", INT64_MIN, INT64_MAX, UINT64_MAX);
}

int
main()
{
	test1();
	test2();
	test3();
	test4();
	test5();

	return 0;
}
