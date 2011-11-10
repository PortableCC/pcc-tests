/*
 * pcc-bug
 * 
 * Subject:    Declaring a pointer to array using a variable for array
 * size.
 * From:       Jesus Sanchez <zexel_ut () hotmail ! com>
 *
 * */

int main(int argc, char *argv[])
{
	int n=5;
	int p1[n]; /* works on pcc and gcc */
	int (*p2 )[]; /* works if you dont specify index*/
	int (*p2e)[n]; /* doesn't work on pcc */
	int (*p3)[][n]; /* also doesn't work on pcc */

	return 0;
}
