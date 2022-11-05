#include <stdio.h>

/**
 * 05L05 - is a function which converts input values to HEX
 * @i is an integer
*/

main()
{
	printf("Hex(uppercase		Hex(lowercase)		Decimal\n");

	int i;

	i = 0; /* starting point for the while loop*/
	while (i < 16)
	{
		/* what loop prints */
		printf("%X				%x				%d\n", i, i, i);
	i++;	/* increment */
	}
	return (0);	/* returns an integer */
}
