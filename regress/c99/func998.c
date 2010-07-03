/* Incorrect - void function cannot return any value */
void foo(){
	return 1; 
}

int main(int *argc, char *argv[]){
	int a ;

	a = foo();
	return 0;
}
