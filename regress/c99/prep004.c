/* 6.10.8 Predefined Macro Names */

int main()
{
	const char *s;
	long l;

// 1. The following macro names shall be defined by the implementation:

	l = __STDC__;
	if (l != 1)
		return 1;

	s = __DATE__;
	s = __FILE__;
	s = __TIME__;

	l = __STDC_HOSTED__;
	if (l != 1 && l != 0)
		return 1;

	l = __STDC_VERSION__;
	if (l != 199901L) // C99
		return 1;

// 2. The following macro names are conditionally defined by the implementation:

#ifdef __STDC_MB_MIGHT_NEQ_WC__
	l = __STDC_MB_MIGHT_NEQ_WC__;
	if (l != 1)
		return 1;
#endif

#ifdef __STDC_IEC_559__
	l = __STDC_IEC_559__;
	if (l != 1)
		return 1;
#endif

#ifdef __STDC_IEC_559_COMPLEX__
	l = __STDC_IEC_559_COMPLEX__;
	if (l != 1)
		return 1;
#endif

#ifdef __STDC_ISO_10646__
	l = __STDC_ISO_10646__;
#endif

	return 0;
}
