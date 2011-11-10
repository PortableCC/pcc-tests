/* 
 * C99 6.7.5.2 
 */
extern int n ;
int B[100];

void fvla(int m, int C[m][m]);

void fvla(int m, int C[m][m]){
	typedef int VLA[m][m];
	int D[m];
	int (*s)[m];
	static int (*q)[m] = &B;
}

int main(int argc, char *argv[]) { return 0; }
