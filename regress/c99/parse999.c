/* C99 6.4 note 6
 *
 * EXAMPLE 2 The program fragment x+++++y is parsed as x ++ ++ + y,
 * which violates a constraint on increment operators, even though
 * the parse x ++ + ++ y might yield a correct expression.
 */

int main(int argc, char *argv[])
{
	int x = 1, y = 2, z; 

	z = x+++++y;

	return 0; 
}
