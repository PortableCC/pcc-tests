/* 
 * pcc bug: redeclaration with different type allowed by PCC.
 * From: Jesus Sanchez <zexel_ut () hotmail ! com> 
 *
 * Also C99 -> 5.1.1.3 
 *
 */
int main(void){
	char foo;
	int foo; // No error message.

	return 0; 
}

