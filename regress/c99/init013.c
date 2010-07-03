/*correct*/
int main(int *argc, char **argv)
{
	int A[] = {1,2,3,4}; 
	int B[3][3] = {{1,2,3},
						{1,2,3},
						{1,2,3}}; 
	int C[3][3] = {1,2,3,1,2,3,1,2,3}; 
	int D[3][3] = {{1},
						{2},
						{3}}; 
	struct {int a[3], b; } c[] = { {1}, 2 };  
	
	typedef int E[]; 
	E z1 = {1,2,3}, y1 = {1,2,3};
	int z2[] = {1,2,3}, y2[] = {1,2,3};

	struct {int d[3], e; } f[] = { [0].d = {1}, [1].d[0] = 2 };  

	return 0; 
}
