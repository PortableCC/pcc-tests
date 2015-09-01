/*
 * Date: Tue, 1 Sep 2015 11:35:07
 * From: Iain Hibbert
 * Subject: [Pcc] __attribute__ ((const)) gives syntax error
 *
 * fails with "syntax error", whereas __const__ works fine
 */

int __attribute__ ((const)) foo;

int main(int argc, char *argv[]) { return 0; }
