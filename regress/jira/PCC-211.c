/*
 * PCC-211
 * interaction between #if expression and #endif comment with "pcc -E -C"
 */

#define FOO 1

#if (FOO == 1)
#endif /* FOO */

#ifndef XYZZY
#define BAR _Pragma("bar")
BAR
#endif /* comment */ 

int main(int argc, char *argv[]) { return 0; }
