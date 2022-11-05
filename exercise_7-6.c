#include <stdio.h>

/**
 * main - demonstrates the use of nested loops
 * Returns: nothing on success and 0 on failure
*/

main()
{
	int i, j;

	i = 1;
	while (i <= 3)
	{
		printf("The start of the iteration %d of the outer loop.\n", i);

		j = 1;
		do {
			printf("	Iteration %d of the inner loop.\n", j);
			j++;
		} while (j <= 4);

		printf("The end of iteration %d of the outer loop.\n", i);
		i++;
	}

	return (0);
}
