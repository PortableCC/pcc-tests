/*
 * PCC-244
 * == operator gets fault at runtime
 */

#define BOOL_BIT unsigned int
#define BOOL_CAST(x) (x)

static struct bit2 {
	unsigned int uibf : 7;
	signed int sibf : 7;
	/*plain*/ int pibf : 7;
	BOOL_BIT bobf : 1;
} bits = { 1u, 1, 1, BOOL_CAST(1) };

static union u_all_type2 {
	signed long long slli;
	unsigned long long ulli;
	signed long int sli;
	unsigned long int uli;
	signed int si;
	unsigned int ui;
	signed short int ssi;
	unsigned short int usi;
	signed char sc;
	unsigned char uc;
	char pc;
//	wchar_t wc;
	struct bit2 bits;
//	enum color col;
	_Bool bol;
	float f;
	double d;
	long double ld;
	void * ptrv;
	char * ptrc;
} u_all_types;

int main(int argc, char *argv[])
{
	struct bit2 res;

	res.bobf = u_all_types.bits.bobf;

	if(bits.bobf == res.bobf) {
		;
	}

	return 0;
}
