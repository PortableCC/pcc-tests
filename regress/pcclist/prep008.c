/*
 * Date: Sun, 12 Jul 2015 22:21:56
 * From: Iain Hibbert
 * Subject: [Pcc] pcc recent fixes
 */

#define UCHAR_MAX       0xff

#if UCHAR_MAX == 0xffU
int main(int argc, char *argv[]) { return 0; }
#else
#error failed
#endif

