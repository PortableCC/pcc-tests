/* 
 * see http://www.lysator.liu.se/c/restrict.html 3.10 
 */

/* Restrict cannot qualify non-pointer object types. */
int restrict x;    /* Constraint violation. */
int restrict *p;   /* Constraint violation. */

/* Restrict cannot qualify pointers to functions. */
float (* restrict f9)(void); /* Constraint violation. */

int main () {return 0;}

