/* 
 * Subject:    Old-style functions declared static are broken
 * From:       Stefan Kempf <stefan () nefkom ! net>
 */
static foo() { int i = 0; return i; }
int main(){return foo();}
