#include <stdio.h>

/**
 * main - converts three integers to HEX
 * Return: hex or nothing if error
*/

main()
{
	int ch1, ch2, ch3;

	ch1 = 15;
	ch2 = 150;
	ch3 = 1500;

	printf("%d in Hex form is %X or %x\n", ch1, ch1, ch1);
	printf("%d in Hex form is %X or %x\n", ch2, ch2, ch2);
	printf("%d in Hex form is %X or %x\n", ch3, ch3, ch3);
	return (0);
}
