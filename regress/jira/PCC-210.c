/*
 * PCC-210
 * GCC defines __VERSION__ but PCC does not
 */

const char v[] = __VERSION__;

int main(int argc, char *argv[]) { return 0; }
