/* basic argc&argv checks */ 
int main(int argc, char **argv){
	if(argc < 1)
		return 1; 

	if(argv[argc] != NULL)
		return 2;

	return 0;
}

