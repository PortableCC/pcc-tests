/* it's not possible to construct a comment as the result of macro
 * replacement 
 */

#define COMMENT // 

int a,b,c ;

int main(int argc, char *argv[]){

	a = b + c ; 
	COMMENT unknown_var;

	return 0;
}
