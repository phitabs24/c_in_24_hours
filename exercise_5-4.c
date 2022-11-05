#include <stdio.h>

/**
 * main - take a character from standard
 * input and writes it to the screen
 * Returns: the character if correct or nothing otherwise
*/

main()
{
	int ch;

	printf("Enter a character: ");
	ch = getchar();
	printf("The character you just entered is: ");
	putchar(ch);
	putchar(10);
	return (0);
}
