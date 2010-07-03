/* correct (6.5.2.5)*/
struct st {
	int a;
	int b;
};

int foo(struct st p1, struct st p2){
	return ((p1.a + p1.b) + (p2.a + p2.b));
}
int bar(struct st *p1, struct st *p2){
	return ((p1->a + p1->b) + (p2->a + p2->b));
}

int main(int *argc, char **argv)
{
	int tmp1 = 0;
	int tmp2 = 0;

	tmp1 = foo(
			(struct st){.a=1, .b=1}, 
			(struct st){.a=1, .b=1}
			);
	if (tmp1 != 4) 
		return 1; 

	tmp2 = bar(
			&(struct st){.a=1, .b=1}, 
			&(struct st){.a=1, .b=1}
			);
	if (tmp2 != 4) 
		return 2; 
	
	return 0; 
}
