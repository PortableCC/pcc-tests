/*
 * Date: Tue, 1 Sep 2015 11:33:47
 * From: Iain Hibbert <plunky@ogmig.net>
 * Subject: Re: [Pcc] compiler error: stmtfree: usdnodes 1
 *
 * fails with "error: stmtfree: usdnodes 1"
 *
 * > The node free checking after a statement failed because one node
 * > was allocated to "int", and yacc fetches it before the free check to
 * > see if it is followed by else.
 */

void foo(int a)
{
	if (a != 0)
		;

	int b;
}

void bar(int a)
{
	if (a == 0)
		;

	1;
}
