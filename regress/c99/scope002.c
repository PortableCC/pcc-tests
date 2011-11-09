/*correct*/
int a = 1;
int main(int argc, char *argv[]){
	int b = 1 ;
	
	{
		int a = 2 ; /* overlaps original a */  
	
		if ( a == b )
			return 1;
	}

	if ( a != b )
		return 2;
		
	return 0; 
}
