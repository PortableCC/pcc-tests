/*
 * Date: Mon, 6 Jul 2015 20:07:04
 * From: Iain Hibbert
 * Subject: Re: [Pcc] Some recent fixes.
 *
 * fails to expand the macro, and stops expanding output at all
 */

#define foo(...) FOO(__VA_ARGS__)

void FOO(char *p) { return; }

int main(int argc, char *argv[])
{
	foo(")");

	return 0;
}
