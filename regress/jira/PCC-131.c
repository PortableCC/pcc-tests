/* 
 * PCC-131
 * __builtin_offset returns the wrong type for pointer fields (?)
 */
struct foo { 
	        int *a; 
}; 

int bar[] = { 
	        __builtin_offsetof(struct foo, a), 
}; 

int main(int argc, char *argv[]) { return 0; }
