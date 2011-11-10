/* c99 6.5.3.4 */

int fun(int i){
	double a[i+5];
	int b = sizeof a ; // excution time sizeof
	
	return b; 
}

int main(int argc, char *argv[])
{
	if ( fun(55) != (sizeof(double) * 60))
		return 1;
	
	return 0;
}
