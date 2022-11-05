#include <stdio.h>

/**
 * main - prints any imput character until k is entered
 * @c: any inputed character
 * returns: nothing on success and 0 otherwise
*/

main()
{
	int c;

	c = ' ';
	printf("Enter a character: \n(enter k to exit)\n");
	while (c != 'k')
	{
		c = getchar();
		putchar(c);
	}
	printf("\nOut of the loop. Bye!\n");
	return (0);
}