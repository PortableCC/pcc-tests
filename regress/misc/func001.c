/* TODO: */ 
struct foo;
int x(void){return 1;} 
int xx1(struct foo); 
struct foo { int a; };
int xx1(struct foo y) {} 

int *(*xx2(int a, char b[a+3][a+x()], long (*c)(void)))(float c); 
int *(*xx2(int a, char b[a+3][a+x()], long (*c)(void)))(float c) { 
	        b[a+8][a+x()] = (*c)();
}

int xx3(int a, char *b); 
int xx3(a,b)char *b;{ }

int main(int argc, char *argv[]) { return 0; }
