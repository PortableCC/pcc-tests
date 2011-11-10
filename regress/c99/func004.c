/* c99 6.9.1 */

typedef int F(void) ;

F f1,f2; 
int f1(void) {return 1;}
int f2() {return 1;}
F *e(void) {return 1;}
F *((d))(void) {return 1;}
int (*fp)(void) ;
F *Fp;

int main(int argc, char *argv[]) { return 0; }
