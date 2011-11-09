/* C99 - 6.7.5.2 */

extern int a ;
extern int b ;

int foo(void){
	int arr1[a][10][b]; 
	int (*arr2)[4][a+1];
	int arr3[a][a][10][b];
	int (*arr4)[a][a][a+1]; 

	arr4 = arr3 ; // correct if: a = 10, b=a+1 

	return 0 ;
} 

int main(int argc, char *argv[])
{
	return foo(); 
}
