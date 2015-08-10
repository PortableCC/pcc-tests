/*
 * Date: Mon, 6 Jul 2015 19:48:07
 * From: Iain Hibbert
 * Subject: Re: [Pcc] Some recent fixes.
 *
 * the definition of E was being lost
 */

#define B       "/*\n"
#define E       " */\n"

void p(char *a) { return; }

int main(int argc, char *argv[])
{
        p(B);
	p(E);

	return 0;
}
