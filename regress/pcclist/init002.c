/*
 * Subject:    Re: -fPIC -fstack-protector
 * From:       Iain Hibbert <plunky () rya-online ! net>
 *
 * Fixed: It was a missed check for array that was the cause of 
 * this bug 
 *
 */

struct args {
	char            name[16];
	unsigned int    flags;
};

void
foo(void)
{
	struct args a = {.name = "", .flags = 0 };
}


int main () {return 0;}

