/* this should fail */

void foo(void){
foo:

	goto bar;
}

void bar(void){
	goto end; 
}

int main(int *argc, char *argv[]){
	goto foo; 

end:
	return 0; 
}
