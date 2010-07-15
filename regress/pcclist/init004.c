/*
 * Subject:    _Pragma("tls") broken for redeclarations
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 * Fixed:  fixdef() should be called for every variable in defid(),
 * not only the first declaration
 */

extern _Pragma("tls") int variable1;
extern _Pragma("tls") int variable1;
int variable2;

int main () {return 0;}

