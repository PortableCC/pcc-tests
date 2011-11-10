/* 
 * PCC-33
 * Verification of function arguments not working for function pointers
 */
typedef int (*MyFunc)(const char *fmt, ...); 

int 
print(const char *fmt, ...) 
{ 
} 

static MyFunc func = (MyFunc)print; 

MyFunc 
getFunc(void) 
{ 
	        return func; 
} 

int main(int argc, char *argv[])
{ 
	        (*(getFunc()))("%d\n", 10); 
	        return 0; 
} 
