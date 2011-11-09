/* c99 6.7.2.1  */ 
struct st {
	int a ;
	float b[];
};

int main(int argc, char *argv[])
{
	struct st s1 = { 543, { 1.0 }}; // Invalid -> C99 

	return 0; 
}
