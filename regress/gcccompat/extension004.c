/*
 * 6.3 Labels as Values
 */

int main() 
{
	int a ; 
	static void *jumptable[] = { 
		&&lab1, 
		&&lab2, 
		&&lab3 
	} ;

	goto *jumptable[0];

lab1:
	a = 1 ;
	goto *jumptable[2];
lab2:
	if (a != 3){
		return 1;
	}else {
		return 0; 
	}
lab3:
	a = 3 ;
	goto *jumptable[1];


	return 2 ;
}
