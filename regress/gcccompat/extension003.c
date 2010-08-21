/* 
 * GCC onlinedoc: 
 * 	6.2 Locally Declared Labels
 *
 */

#define CODE(a) 				\
{ 									\
	__label__ found; 			\
	for (a=0;a<100;a++) 		\
		if ( a == 50 ) 		\
			goto found; 		\
									\
	return 1; 					\
									\
	found:						\
	return 0; 					\
}									

int main()
{
	int a;

	CODE(a) 

	return 2; 
}

