/* 
 * 6.10 Additional Floating Types
 *
 * Aditional floating point types. __float80 and __float128 types
 * are supported on i386, x86_64 and ia64 targets.
 *
 */
typedef _Complex float __attribute__((mode(TC))) _Complex128;
typedef _Complex float __attribute__((mode(XC))) _Complex80;

_Complex128 c1; 
_Complex80 c2; 
__float80 f1 = 1.0w;
__float128 f2 = 2.0Q;

int main() {return 0;}
