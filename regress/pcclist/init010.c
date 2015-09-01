/*
 * Date: Mon, 20 Jul 2015 20:27:46
 * From: Iain Hibbert
 * Subject: [Pcc] C11 update issue
 *
 * produces a "compiler takes alignment of function" error
 */

struct foo { int a; };

typedef struct foo *foo_t(void);

struct bar {
	void (*a)(foo_t);
};

int main(int argc, char *argv[]) { return 0; }
