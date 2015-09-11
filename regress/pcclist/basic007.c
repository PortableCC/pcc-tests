/*
 * Date: Mon, 7 Sep 2015 21:42:05
 * From: Iain Hibbert
 * Subject: [Pcc] too many long long (on i386) comparisons?
 *
 * fails with a label number out of boundaries
 */

long long streams;
long long blocks;
long long groups;

void foo(void)
{
	if (streams == 0
	    || streams > 1000
	    || blocks == 0
	    || blocks > 1000
	    || groups == 0
	    || groups > 1000)
		return;
}

int main(int argc, char *argv[]) { return 0; }
