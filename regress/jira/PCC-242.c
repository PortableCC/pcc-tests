/*
 * PCC-242
 * Some hex floating-point constants cause inf loop in compiler
 */

float f = 0x0.0p+9999999999;
float g = 0x0.0p+9999999999f;
float h = 0x0.0p+9999999999L;

int main(int argc, char *argv[]) { return 0; }
