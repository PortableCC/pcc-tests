/*
 * cl.exe messagebox.c user32.lib
 * pcc -o messagebox.exe messagebox.c -lkernel32 -luser32 -Wl,--subsystem,windows
 *
 */
#include <windows.h>

int WINAPI
WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL, "Hello world!", "Title", MB_OK);
    return 0;
}
