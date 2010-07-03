/*correct*/
int a = 1;

int main(int *argc, char *argv[]){
	int b = 1 ;
	{
		int c = 1;
		
		if ( a == b == c )
			return 0;
	}
		
	return 1; 
}
