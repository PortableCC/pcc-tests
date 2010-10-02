#include <stdio.h>
#include <stdlib.h> /* for malloc() */
/* correct */ 
struct st {
	int i ;
	char data[10]; 
	struct st *prev;
	struct st *next;
};

int main(int *argc, char **argv)
{
	struct st *first,*n,*p;
	int i;

	first = (struct st *) malloc (sizeof(struct st) );
	first->prev = NULL;
	first->next = NULL;

	n = (struct st *) malloc (sizeof(struct st) );
	first->next = n ;
	n->prev = first ; 
	n->next = NULL ;

	for (i=0; i<10 ; i++){
		p = n; 
		n = (struct st *) malloc (sizeof(struct st) );
		p->next = n ;
		n->prev = p ; 
		n->next = NULL ;
	}

	for (p = first ; p ; p=p->next){
		free(p);
	}

	return 0; 
}
