/* correct - from c99 */

int main(int *argc, char **argv)
{
	/* pa[2] = {1,2} */ 
	int *pa = (int []){1,2};  
	
	/* pb[2] = {*pb, 0} */ 
	int *pb = (int [2]){*pb};

	return 0; 
}
