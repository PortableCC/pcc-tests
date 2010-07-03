/*correct*/
int main(int *argc, char *argv[]){
	int a = 0;  

	goto a ; 
	return 1; 

a:
	goto b ; 
	return 2;
	
	{
		b:	 
		goto c ;
		return 3; 
	}

c:
	return 0 ; 
}
