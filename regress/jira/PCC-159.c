/* 
 * PCC-159 
 * the attribute __stdcall__ is not supported in a declaration 
 *
 * pcc -c PCC-159.c
 */

int __attribute__((__stdcall__)) bar(int);

int bar(int a)
{
	return a;
}

int foo(int a)
{
	    return bar(a);
}

int main(int argc, char *argv[]) { return 0; }
