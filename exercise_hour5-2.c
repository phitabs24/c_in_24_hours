#include <stdio.h>

/**
 * main - prints two numbers aligning them to the left
 * Return: number if true and nothing if error
*/

main()
{
	int num1;
	double num2;

	num1 = 123;
	num2 = 123.456;

	printf("%-d\n", num1);
	printf("%-10.3f\n", num2);
	return (0);
}
