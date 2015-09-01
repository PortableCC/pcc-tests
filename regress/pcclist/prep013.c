/*
 * Date: Mon, 13 Jul 2015 20:54:28
 * From: Iain Hibbert
 * Subject: [Pcc] CPP update bugs
 *
 * forgot to put space back in after deciding that there should
 * be no substitution, eg produced
 * 
 * struct mount {
 *	struct statvfsmnt_stat;
 * };
 */

struct statvfs {
	int a;
};

#define statvfs(a, b)	_statvfs(a, b)

struct mount {
	struct statvfs mnt_stat;
};

int main(int argc, char *argv[]) { return 0; }
