/* 
 * PCC-101
 * __attribute__ ((__mode__ (__SI__))) failed to compile
 *
 */
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__))); 
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__))); 
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__))); 
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__))); 

int main(int argc, char *argv[]) { return 0; }
