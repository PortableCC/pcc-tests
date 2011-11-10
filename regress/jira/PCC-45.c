/* 
 * PCC-45
 * compile-time evaluation of conditional operator with float test
 */
#define VAL 5.0 

const int array[2] = { 
	VAL > 10 ? 1 : 0, 
	VAL > 20 ? 3 : 0 
}; 

int main(int argc, char *argv[]) { return 0; }
