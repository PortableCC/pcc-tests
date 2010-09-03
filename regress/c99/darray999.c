/* 
 * C99 - 6.7.5.2 
 *	
 *	incompatible test 
 * */

extern int a ;
extern int b ;

int foo(void){
	int arr1[a][10][b]; 
	int (*arr2)[4][a+1];
	int arr3[a][a][10][b];
	int (*arr4)[a][a][a+1]; 

	arr2 = arr1 ; // incompatible 4 != 10 
	arr4 = arr3 ; // incomaptible: a = 123 b = 21

	return 0 ;
} 

int main(int *argc, char **argv)
{
	return foo(); 
}
