#include "main.h"

/**
 * print_last_digit - print prints the last digit of a number
 * @n: interger to take last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = n % 10 * -1;
_putchar(last_digit + '0');
}
else if (n > 0)
{
last_digit = n % 10;
_putchar(last_digit + '0');
}
else if (n == 0)
{
last_digit = 0;
_putchar(last_digit + '0');
}
return (last_digit);
}
