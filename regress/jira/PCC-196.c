/*
 * PCC-196
 * amd64: suffix or operands invalid for `and'
 */

typedef unsigned long long u_int64_t;

struct sys_segment_descriptor {
	u_int64_t sd_lolimit:16;
	u_int64_t sd_lobase:24;
	u_int64_t sd_type:5;
	u_int64_t sd_dpl:2;
	u_int64_t sd_p:1;
	u_int64_t sd_hilimit:4;
	u_int64_t sd_xx1:3;
	u_int64_t sd_gran:1;
	u_int64_t sd_hibase:40;
	u_int64_t sd_xx2:8;
	u_int64_t sd_zero:5;
	u_int64_t sd_xx3:19;
} __attribute__((packed));

void
gdt_put_slot(int slot)
{
	struct sys_segment_descriptor gdt[1];
	gdt[0].sd_xx3 = 0;
}

int main(int argc, char *argv[]) { return 0; }
