/*
 * PCC-178
 * function returns illegal type / ICE
 */

#define __CONCAT(x,y) x ## y

#define dev_type_open(n) int n(int)

#define dev_decl(n,t) __CONCAT(dev_type_,t)(__CONCAT(n,t))

#define cdev_decl(n) dev_decl(n,open)

cdev_decl(midi);

int main(int argc, char *argv[]) { return 0; }
int midiopen(int a) { return 0; }
