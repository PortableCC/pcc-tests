/*
 * PCC-220
 * do{;}while( 0.0 ); get compiler error
 */

int main(int argc, char *argv[])
{
	do {
		;
	} while ( 0.0 );

	return 0;
}
