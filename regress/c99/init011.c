#include <stdlib.h>
/* c99 6.7.2.1  */ 
struct st {
	int a ;
	char b[];
};

int main(int *argc, char **argv)
{
	struct st *p;
	int n = 10;

	p = (struct st *) malloc (sizeof(struct st) + sizeof(char [n]) );
	
	if(p){
		free(p);
		return 0;
	}

	return 1; 
}
