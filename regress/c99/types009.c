
/* C99 Annex F - IEC 60559 floating-point arithmetic */

#ifdef __STDC_IEC_559__
float _Complex c1; 
double _Complex c2;
long double _Complex c3;
#endif

/* C99 Annex G - IEC 60559-compatible complex arithmetic */

#ifdef __STDC_IEC_559_COMPLEX__
float _Imaginary i1; // pcc: typenode2 t 16
double _Imaginary i2;
long double _Imaginary i3;
#endif

int main() {return 0;} 
