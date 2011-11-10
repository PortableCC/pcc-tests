/* 
 * c99 5.2.4.1 
 *
 * - 63 nesting levels of parenthesized daclaretors within a full
 *   declarator 
 * - 63 nesting levels of parenthesized expressions within a full
 *   expression
 */

int a = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((1)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
long int b ; 


int main(int argc, char *argv[])
{
	b =  (2+((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((2)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	return 0;
}
