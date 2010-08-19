#define GLUE(a,b) a ## b

float abc[] = { GLUE(1,1), 
	GLUE(1,2),
	GLUE(0x,7),
	GLUE(1,),
	GLUE(00,4),
	GLUE(,) } ;

int main() 
{
	if ( abc[0] != 11) 
		return 1; 
	if ( abc[1] != 12) 
		return 1; 
	if ( abc[2] != 7) 
		return 1; 
	if ( abc[3] != 1) 
		return 1; 
	if ( abc[4] != 004) 
		return 1; 
	if ( abc[5] != 0) 
		return 1; 

	return 0; 
}
