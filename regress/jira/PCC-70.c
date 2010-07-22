/* 
 * PCC-70.c
 * cpp incorrectly parses code
 */
#include <sys/types.h>

struct tty {
};

struct proc {
};

struct uio {
};

#define ttynodisc ((int (*)(dev_t, struct tty *))enodev)
#define ttyerrclose ((int (*)(struct tty *, int flags))enodev)
#define ttyerrio ((int (*)(struct tty *, struct uio *, int))enodev)
#define ttyerrinput ((int (*)(int c, struct tty *))enodev)
#define ttyerrstart ((int (*)(struct tty *))enodev)

int	nullioctl(struct tty *, u_long, caddr_t, int, struct proc *);
int	nullmodem(struct tty *tp, int flag);

int      enodev(void);

struct linesw {
        int     (*l_open)(dev_t dev, struct tty *tp);
        int     (*l_close)(struct tty *tp, int flags);
        int     (*l_read)(struct tty *tp, struct uio *uio,
                                     int flag);
        int     (*l_write)(struct tty *tp, struct uio *uio,
                                     int flag);
        int     (*l_ioctl)(struct tty *tp, u_long cmd, caddr_t data,
                                     int flag, struct proc *p);
        int     (*l_rint)(int c, struct tty *tp);
        int     (*l_start)(struct tty *tp);
        int     (*l_modem)(struct tty *tp, int flag);
};

struct linesw linesw[] =
{
        { ttynodisc, ttyerrclose, ttyerrio, ttyerrio, nullioctl,
          ttyerrinput, ttyerrstart, nullmodem },        /* 1- defunct */
        { ttynodisc, ttyerrclose, ttyerrio, ttyerrio, nullioctl,
          ttyerrinput, ttyerrstart, nullmodem },
};

int
main(int argc, char *argv[])
{
	return (0);
}


