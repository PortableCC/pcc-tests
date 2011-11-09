/* Correct, found in C99 */
int f1(int), *f2(int), (*f3)(int) ;
int (*f4[5])(int) ;
int (*f5(int (*) (long), int))(int, ... ); // yep, this is correct ;)  

typedef void F(void); 
F f6,f7;

void f6(){ } 
void f7(){ } 

F *f8(){ }

void (*funp1)(void); 
F *funp2; 


int main(int argc, char *argv[]){

	return 0;
}
