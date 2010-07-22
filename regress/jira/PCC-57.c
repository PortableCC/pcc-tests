/* 
 * PCC-57
 * _Complex constant value is not handled as a constant on
 * initialization
 */

_Complex long double c0 = 1.1l; /* OK */ 
_Complex long double c1 = 2.2li; /* OK */ 
_Complex long double c2 = 1.1l + 2.2li; /* OK */ 
_Complex long double c3 = 1.1l + 2.2li + 3.3l; /* NG */ 
_Complex long double c4 = 2.2li + 1.1l; /* OK */ 
_Complex long double c5 = 2.2li + 1.1l + 3.3l; /* NG */ 
_Complex long double c6 = 1.1l + 1.1l + 1.1l + 2.2li; /* OK */ 
_Complex long double c7 = 2.2li + 2.2li + 2.2li + 1.1l; /* OK */ 

int main(){return 0;}
