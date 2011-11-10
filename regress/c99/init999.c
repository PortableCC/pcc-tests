/* 
 * C99 6.5.2.5
 * - single compound literal cannot specify a circularly linked object 
 */
struct zeros {
	int zero; 
	struct zeros *ptr; 
}
struct zeros endless_zeros = { 0, &endless_zeros}; 

void func(struct zeros st){ }

int main(int argc, char *argv[])
{
	func(endless_zeros);
	return 0;
}

