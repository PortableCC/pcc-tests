/* c99 6.7.5.3 */ 
void add(int x,int y,int A1[x][y*x+100],int A2[x][y*x+100],int A3[x][y*x+100] )
{
	int i,j;

	for (i=0 ; i < x ; i++) 
		for (j=0 ; j < (y*x+100) ; j++)
			A3[i][j] = A1[i][j] + A2[i][j];
}

int main(int argc, char *argv[])
{
	int a = 12, 
		 b = 5, 
		 c = a * b + 100;
	int T1[a][c] ;
	int T2[a][c] ;
	int T3[a][c] ;

	add(a,b,T1,T2,T3); 

	return 0; 
}

