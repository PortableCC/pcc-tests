/* Incorrect - function foo must return value */
int foo(){
	return; 
}

int main(int argc, char *argv[]){
	int a ;

	(void) foo();
	return 0;
}
