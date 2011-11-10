/*
 * that if the function name begins with L, the __func__ expression
 * will accidentally expand as a wide string.
 *
 * From:       Iain Hibbert <plunky () rya-online ! net>
 *
 * compile with --fatal-warnings 
 */

void foo(const char *cc) { }

void Loop(void)
{
		foo(__func__);
}

int main(int argc, char *argv[]) { return 0; }
