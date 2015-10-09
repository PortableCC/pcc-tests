/*
 * Date: Mon, 28 Sep 2015 19:00:46
 * From: Iain Hibbert
 * Subject: [Pcc] junk inserted in string containing definition
 *
 */

#define SIZE		256

#define bog		0
#define	fog(x)		bog
#define	dog(x)		fog(), fog()

#define	bar(x)		dog(), fog(), pr("SIZE")

#define foo(x)		bar(), bar()

void pr(char *a)
{
	if (*a != 'S')
		exit(1);
}

int main(int argc, char *argv[])
{
	foo();

	return 0;
}
