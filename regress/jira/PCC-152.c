/* 
 * PCC-152
 * pcc fail to compile include/ctype.h on linux: __attribute__
 * ((__const))
 */
extern __const unsigned short int **__ctype_b_loc (void) __attribute__ ((__nothrow__)) __attribute__ ((__const));

int main(int argc, char ** argv)
{
	    return 0;
}


