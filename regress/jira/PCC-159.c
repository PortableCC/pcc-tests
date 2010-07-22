/* 
 * PCC-159 
 * the attribute __stdcall__ is not supported in a declaration 
 *
 * pcc -c PCC-159.c
 */
int (__attribute__((__stdcall__)) bar)(int b);

int foo(int a)
{
	    return bar(a);
}


