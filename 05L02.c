#include <stdio.h>
/**
 * 05L02 - reads input and prints it on the screen
 * @ch1 - an integer value
 * @ch2 - another interger value
*/
main()
{
	int ch1, ch2;

	printf("Please type in two characters together:\n");
	ch1 = getc(stdin);
	ch2 = getchar();
	printf("The first Character you entered is: %c\n", ch1);
	printf("The second character you just entered is: %c\n", ch2);
	return (0);
}
