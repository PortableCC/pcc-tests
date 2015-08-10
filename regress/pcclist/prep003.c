/*
 * Date: Mon, 6 Jul 2015 19:33:59
 * From: Iain Hibbert
 * Subject: Re: [Pcc] Some recent fixes.
 *
 * did not perform the macro substitution
 */

#define STDIO_H <stdio.h>
#include STDIO_H

int main(int argc, char *argv[]) { return 0; }
