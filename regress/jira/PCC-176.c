/*
 * PCC-176
 * #include_next failure within conditionals
 */

#ifdef USE_NEXT
#include_next <stdlib.h>
#endif

int main(int argc, char *argv[]) { return 0; }
