/*
 * PCC-378
 * placing a pointer to an undefined struct in specific section fails
 */

struct foo;
struct foo *foo __attribute__((__section__(".data.foo")));

int main(int argc, char *argv[]) { return 0; }
