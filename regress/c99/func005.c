/* c99 6.7.5.3 */
double f1(short a, short b, double X[a][m]);
double f1(short a, short b, double X[*][*]);
double f1(short a, short b, double X[ ][*]);
double f1(short a, short b, double X[ ][m]);
void f2(double (* restrict a)[5]);
void f2(double a[restrict][5]); 
void f2(double a[restrict 3][5]); 
void f2(double a[restrict static 3][5]); // pcc: syntax error
int main() {return 0;} 
