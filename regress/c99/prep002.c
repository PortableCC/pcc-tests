/*Correct*/
#define V1 1 

#ifdef V1 
	#define V2 2 
#else
	#define V3 3 
#endif

#if V1 == 1 
	#define V4 4 
#elif V1 == 2 
	#define V4 4 
#elif V1 == 3
	#define V4 4 
#else 
	#define V4 4 
#endif 

#undef V1

int main(int argc, char *argv[]) { return 0; }
