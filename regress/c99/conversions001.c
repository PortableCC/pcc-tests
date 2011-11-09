/* Correct - found in C99 */
int main(int argc, char *argv[])
{
	_Bool b ; 
	int i = 246;
	double d = -4;
	float f = 0; 

	b = (_Bool) i ; 
	if (! b)
		return 1 ;
	
	b = (_Bool) d ; 
	if (! b)
		return 2 ;
	
	b = (_Bool) f ; 
	if (b)
		return 3 ;

	return 0;
}
