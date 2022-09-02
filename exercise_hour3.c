#include <stdio.h>
int integer_mul(int x, int y)
{
    int result;
    result = x * y;
    return result;
}

int main()
{
    int mul;

    mul = integer_mul(3, 5);
    printf("The product of 3 and 5 is %d.\n", mul);
    return mul;
}