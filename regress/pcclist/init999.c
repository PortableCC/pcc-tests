/* pcc bug: redeclaration with different type allowed by PCC.
 * From: Jesus Sanchez <zexel_ut () hotmail ! com> */
int main(void){
	char foo;
	int foo; // No error message.

	return 0; 
}

