/* List:       pcc-list
 * Subject:    vla issues
 * From:       Szabolcs Nagy <nsz () port70 ! net>
 * Date:       2010-09-01 18:19:25
 * Message-ID: 20100901181925.GA27791 () port70 ! net
 */

int f(){
	int i = ({f();}); // pcc: operands of = have incompatible types
	int j = ({f(); f();}); // works fine

	return 0;
}

int main(int argc, char *argv[])
{
	return f();
}
