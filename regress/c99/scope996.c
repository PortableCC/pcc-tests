/* this is not permitted  */

int main(int *argc, char *argv[]){

	int a ; 

	goto label1; 
	{
		int b; 
	label1:
		
	}


	{
	label2:
		int c ;
		goto end; /* just for sure */
	}
	goto label2; 

end:

	return 0; 
}
