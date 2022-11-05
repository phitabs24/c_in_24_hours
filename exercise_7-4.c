#include <stdio.h>

/**
 * main - prints the numeric value of alphabets
 * Returns: the character or zero otherwise
*/

main()
{
	int i;

	for (i = 65; i < 72; i++)
		printf("The numeric value of %c is %d.\n", i, i);
	return (0);
}
