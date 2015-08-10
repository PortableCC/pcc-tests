/*
 * Date: Fri, 3 July 2015
 * Subject: Re: [Pcc] Some recent fixes
 * From: Iain Hibbert
 *
 * thought it was a comment and did not know how to handle it
 */

#define bar(x) x
#define foo(x) bar(x)

int main(int argc, char *argv[])
{
	int a = foo(argc/8);
	return 0;
}
