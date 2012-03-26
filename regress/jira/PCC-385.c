/*
 * PCC-385
 * pcc failed to parse attributes on function arguments
 */

#define __a __attribute__ (( __unused__ ))

/* Declare without parameter names */
void foo0 ( __a int );
void foo1 ( int __a );
void foo2 ( __a int[] );
void foo3 ( int[] __a );
void foo4 ( __a void (*)(int) );
void foo5 ( void (*)(int) __a );
void foo6 ( __a void (*)() );
void foo7 ( void (*)() __a );
void foo8 ( __a void (int) );
void foo9 ( void (int) __a );
void fooA ( __a void () );
void fooB ( void () __a );

/* Declare with parameter names */
void foo0 ( __a int a );
void foo1 ( int a __a );
void foo2 ( __a int a[] );
void foo3 ( int a[] __a );
void foo4 ( __a void (*a)(int b) );
void foo5 ( void (*a)(int b) __a );
void foo6 ( __a void (*a)() );
void foo7 ( void (*a)() __a );
void foo8 ( __a void a (int b) );
void foo9 ( void a (int b) __a );
void fooA ( __a void a () );
void fooB ( void a () __a );

/* Define */
void foo0 ( __a int a ) {}
void foo1 ( int a __a ) {}
void foo2 ( __a int a[] ) {}
void foo3 ( int a[] __a ) {}
void foo4 ( __a void (*a)(int b) ) {}
void foo5 ( void (*a)(int b) __a ) {}
void foo6 ( __a void (*a)() ) {}
void foo7 ( void (*a)() __a ) {}
void foo8 ( __a void a (int b) ) {}
void foo9 ( void a (int b) __a ) {}
void fooA ( __a void a () ) {}
void fooB ( void a () __a ) {}

int main(int argc, char *argv[]) { return 0; }
