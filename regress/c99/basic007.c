int main () 
{
	char *a = "\a \b \f \n \r \t \v \\ \' \" \? "; 
	char *b = "\023 \032 \02 \06"; 
	char *c = "\x60 \x20 \x33 \xFF "; 
	return 0; 
}
