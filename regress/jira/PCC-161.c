/* pcc-bug
 * Subject:    function declared without specifying arguments.
 * From:       Jesus Sanchez <zexel_ut () hotmail ! com>
 * */
#include <stdio.h>

int fa(); // declare fa() as "don't know about arguments"

int fa(void){ // define fa() as no arguments
	return 1;
}

int main(int argc, char *argv[])
{
	int a = fa(1); // too many arguments used

	return 0;
}
