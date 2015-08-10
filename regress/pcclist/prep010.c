/*
 * Date: Sun, 12 Jul 2015 22:31:50
 * From: Iain Hibbert
 * Subject: [Pcc] pcc recent fixes
 *
 * complains about invalid UCN
 */

char *p = "\\u%04lX";

int main(int argc, char *argv[]) { return 0; }
