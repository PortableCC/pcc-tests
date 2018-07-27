/* C99 signbit macro */
#include <math.h>

main()
{
	float f = 0.0f;
	double d = 0.0;
	long double l = 0.0l;

	if (signbit(f) + signbit(d) + signbit(l))
		return 1;
	f = d = l = -1.0;
	if (signbit(f) + signbit(d) + signbit(l) - 3)
		return 1;
	f = d = l = -0.0;
	if (signbit(f) + signbit(d) + signbit(l) - 3)
		return 1;
	f = d = l = nan("");
	if (signbit(f) + signbit(d) + signbit(l))
		return 1;
	f = d = l = -nan("");
	if (signbit(f) + signbit(d) + signbit(l) - 3)
		return 1;
	f = d = l = HUGE_VAL;
	if (signbit(f) + signbit(d) + signbit(l))
		return 1;
	f = d = l = -HUGE_VAL;
	if (signbit(f) + signbit(d) + signbit(l) - 3)
		return 1;
	return 0;
}
