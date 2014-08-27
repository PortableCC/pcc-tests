/*
 * PCC-201
 * amd64: compiler error: Cannot generate code
 */

void bus_space_read_region_1(unsigned long h,unsigned char *ptr,unsigned long cnt)
{
	int dummy1;
	void *dummy2;
	int dummy3;

#ifdef __amd64__
	__asm __volatile(" cld ;"
			 " repne ;"
			 " movsb" :
	    		 "=S" (dummy1), "=D" (dummy2), "=c" (dummy3) :
	    		 "0" (h), "1" (ptr), "2" (cnt) :
	    		 "memory");
#endif
}

int main(int argc, char *argv[]) { return 0; }
