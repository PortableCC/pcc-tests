#include <stdio.h>
#include <stdlib.h> /* for malloc() */
/* correct */ 
struct st {
	int i ;
	char data[10]; 
	struct st *prev;
	struct st *next;
};

struct softfloat {
	union {
		int fp[4]; 
	};
} A;

int z(struct softfloat f) { return 0; }

int main(int argc, char *argv[])
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

	p = first ;
	while (p) {
		n = p;
		p = p->next;
		free(n);
	}
	z(A);
	return 0; 
}

