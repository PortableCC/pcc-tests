/* Correct - found in C99 (6.7.4) */
inline int foo(){ return 1; } 
inline int bar(){ return 1; } 

extern int bar();

int foobar(){ 
	return foo() + bar() ; 
} 

int main(int *argc, char *argv[]){
	if ( foobar() != 2)
		return 1; 

	return 0;
}
