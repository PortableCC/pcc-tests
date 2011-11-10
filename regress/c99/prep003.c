/*correct*/
#define CCC(item,id)  item##_##id 
#define DEBUG(...) fprintf(stderr, __VA_ARGS__ )

#define A(a) a 
#define AA(a) A(a) 
#define AAA(a) AA(a) 

#define EMPTY 

int main(int argc, char *argv[]) { return 0; }
