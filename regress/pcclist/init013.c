/*
 * Date: Mon, 21 Sep 2015 22:26:18
 * From: Iain Hibbert
 * Subject: [Pcc] constant data not being emitted
 */

struct a { unsigned char a[16]; };

struct a *FOO = (struct a *)"FOO"; 
static struct a *BAR = (struct a *)"BAR";

int main(int argc, char *argv[])
{
        struct a *foo = (struct a *)"foo"; 
        static struct a *bar = (struct a *)"bar";

        return 0;
}
