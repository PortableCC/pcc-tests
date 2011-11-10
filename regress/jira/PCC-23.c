/* 
 * PCC-23 
 * strtold() broken on Ubuntu
 */
#include <stdio.h> 
#include <stdlib.h> 

void 
test(const char *str) 
{ 
        float f = strtof(str, NULL); 
        double d = strtod(str, NULL); 
        long double ld = strtold(str, NULL); 

        printf("%f %f %Lf\n", f, d, ld); 
} 

int main(int argc, char *argv[])
{ 
        float f; 
        double d; 
        long double ld; 

        test("+3.14E16"); 
        test("3.14E+16"); 
        test("3.14E-16"); 

        test(" +3.14E16"); 
        test(" 3.14E+16"); 
        test(" 3.14E-16"); 

        return 0; 
} 

