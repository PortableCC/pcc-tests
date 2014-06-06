/*
 * PCC-186
 * NetBSD/amd64: compiler error: ADDROF error
 */

typedef struct {
	int mon;
} s_t;

int main(int argc, char *argv[])
{
	static char months[12][4] = { "Jan", "Feb", "Mar", "Apr",
				      "May", "Jun", "Jul", "Aug",
				      "Sep", "Oct", "Nov", "Dec" };
	char *mon;
	s_t x;

	x.mon = 1;

	/* fails with PIC code (= pcc -k) */
	mon = months[(x.mon - 1) % 12];

	return 0;
}
