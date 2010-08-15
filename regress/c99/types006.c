/* C99 6.2.7 composite types 
 * TODO: make test
 * */ 

int fun(int (*)(), float(*)[5]) ;
int fun(int (*)(int *), float(*)[]) ;

/* result is */
int fun(int (*)(int *), float(*)[5]) ;

int main()
{
	return 0;
}

