/* 
 * PCC-155
 * pcc failed to compile linux/socket.h (__alignof__ not supported)
 *
 * linux/socket.h use __attribute__ ((aligned((__alignof__ (struct
 * sockaddr *))))); 
 * that works with gcc, but failed to compile with pcc.  
 *
 * TODO:
 */
#ifdef __LINUX__
#include <linux/socket.h>

int main () {return 0;}
#else 
int main () {return 0;}
#endif
