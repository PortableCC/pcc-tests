/*
 * PCC-249
 * compiler error: illegal address
 */

void mmx_zero_reg(void) { }

typedef unsigned char uint8_t;

static __attribute__ ((__always_inline__))
void MC_put_mmx(const int width, int height, uint8_t *dest, const uint8_t *ref, const int stride)
{
    mmx_zero_reg ();

    do {
	__asm__ __volatile__ ("movq" " %0, %%" "mm1" : : "m" (*ref));
        __asm__ __volatile__ ("movq" " %%" "mm1" ", %0" : "=m" (*dest) : );

        if (width == 16) {
		__asm__ __volatile__ ("movq" " %0, %%" "mm1" : : "m" (*(ref+8)));
		__asm__ __volatile__ ("movq" " %%" "mm1" ", %0" : "=m" (*(dest+8)) : );
	}

	dest += stride;
	ref += stride;
    } while (--height);
}

int main(int argc, char *argv[]) { return 0; }
