/*
 * PCC-197
 * amd64: unsupported xasm constraint 'A'
 */

#ifdef __amd64__
typedef unsigned int u_int;
typedef unsigned long long u_int64_t;

#define OPTERON_MSR_PASSCODE 0x9c5a203a

static __inline u_int64_t
rdmsr_locked(u_int msr, u_int code)
{
	u_int64_t rv;

	__asm volatile("rdmsr"	: "=A" (rv)
				: "c" (msr), "D" (code));

	return (rv);
}

void
amd64_errata_testmsr(void)
{
	u_int e_data1;
	u_int64_t val = rdmsr_locked(e_data1, OPTERON_MSR_PASSCODE);
}
#endif

int main(int argc, char *argv[]) { return 0; }
