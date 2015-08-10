/*
 * Date: Mon, 13 Jul 2015 19:59:18
 * From: Iain Hibbert
 * Subject: [Pcc] CPP update bugs
 *
 * this one is because of the character constant
 */

#if FOO == '\n'
#endif

int main(int argc, char *argv[]) { return 0; }
