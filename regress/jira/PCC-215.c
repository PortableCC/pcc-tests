/*
 * PCC-215
 * Valid floating-point initializer not accepted
 */

static const long double ld[] = { 0.L/0.L, 1.L/0.L };

int main(int argc, char *argv[]) { return 0; }
