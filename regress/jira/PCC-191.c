/*
 * PCC-191
 * bit field fails on _Bool: illegal field type
 */

struct { _Bool b : 1; } s;

int main(int argc, char *argv[]) { return 0; }
