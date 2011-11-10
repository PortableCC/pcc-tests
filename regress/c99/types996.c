/* 
 * C99 - 6.7.2.1 
 *
 * there is no pointers or arrays of bitfields 
 *
 */
struct ST {
	unsigned int *f1 :2 ;
	unsigned int f2[5]:5;
};


int main(int argc, char *argv[])
{
	struct ST s1 ; 

	return 0 ;
}
