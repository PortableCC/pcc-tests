/* 
 * PCC-157 
 * pcc fail to compile a temporary union in __WAIT_INT from sys/wait.h
 *
 */

#include <sys/wait.h>

int foo(int a, int b)
{
    int pid = 0;
    int status = a;
    int wret = b;

        if (pid == wret && WIFEXITED(status))
        {
            pid = WEXITSTATUS(status);
        }
        else
        {
            pid = 255; /* abnormal exit with an abort or an interrupt */
        }

    return pid;
}

int main(int argc, char *argv[]) { return 0; }
