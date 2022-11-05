#include <stdio.h>

/**
 * main - prints the sum of two numbers
 * @i, j: declared integers
 * return: nothing if successfull
 * and 0 otherwise
*/
main()
{
	int i, j;

	for (i = 0, j = 1; i < 8; i++, j++)
		printf("%d  +  %d  =  %d\n", i, j, i + j);
	printf("\n");
	for (i = 0, j = 1; i < 8; i++, j++)
		;
	printf("%d  +  %d  =  %d\n", i, j, i + j);
	return (0);

}
