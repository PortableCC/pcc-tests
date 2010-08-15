#include <stdio.h>
#include <string.h>

 /* C99 - 5.1.2.2.1 */ 
int main(int argc, char **argv){
	char *argv4 = "ddd" ;
	if(argc != 4)
		return 1; 

	printf("program: \"%s\" param1: \"%s\" param2: \"%s\" param3: \"%s\" \n",
			argv[0],argv[1],argv[2],argv[3]);

	if (strcmp(argv[0],"./basic006.out"))
		return 2; 
	if (strcmp(argv[1],"param1")) 
		return 3; 
	if (strcmp(argv[2],"PARAM2")) 
		return 4; 
	if (strcmp(argv[3],"Param3")) 
		return 5; 

	argc = 5 ; 
	strcpy(argv[0],"prog");
	strcpy(argv[1],"aaa");
	strcpy(argv[2],"bbb");
	strcpy(argv[3],"ccc");
	argv[4] = argv4 ;

	printf("program: \"%s\" param1: \"%s\" param2: \"%s\" "
			 "param3: \"%s\" param4: \"%s\" \n",
			argv[0],argv[1],argv[2],argv[3],argv[4] );

	if (argc != 5)
		return 6; 
	if (strcmp(argv[0],"prog"))
		return 7; 
	if (strcmp(argv[1],"aaa")) 
		return 8; 
	if (strcmp(argv[2],"bbb")) 
		return 9; 
	if (strcmp(argv[3],"ccc")) 
		return 10; 
	if (strcmp(argv[4],"ddd")) 
		return 11; 
	
	return 0;
}

