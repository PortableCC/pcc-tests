/* 
 * PCC-65
 *	some constructor/destructor make crash
 */
#pragma constructor 
static void init_memory(void) { } 

#pragma destructor 
static void fini_memory(void) { } 

int main() { return 0; } 
