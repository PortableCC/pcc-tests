/*
 * Date: Mon, 19 Oct 2015 20:34:52
 * From: Iain Hibbert
 * Subject: [Pcc] macro substitution in _Pragma() string
 *
 * C99 suggests that it is allowed to perform macro substitutions,
 * but not permitted in some cases (for STDC) so its easier to just
 * never do them.
 *
 * force -Werror=unknown-pragmas so that it fails when a
 * substitution takes place
 */
#pragma GCC diagnostic error "-Wunknown-pragmas"

#define weak		0x004

#define __weak_foo	_Pragma("weak foo")

__weak_foo int foo = 4;

#pragma weak foo

int main(int argc, char *argv[]) { return 0; }
