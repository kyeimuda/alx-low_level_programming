#include <stdio.h>

/**
 *sqrt_check - checks for squar root
 *@n: number to check its squared root
 *@c: the number checked to see if it is squared of n
 * Return: sqaured root value
 */

int sqrt_check(int n, int c)
{
if (c * c == n)
{
return (c);
}
else if (c >= n / 2)
return (-1);
return (sqrt_check(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: squared root of this number
 * Return: square root or -1 if it is not a natural squared root
 */

int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
else if (n < 0)
return (-1);
else if (n == 0)
return (0);
return (sqrt_check(n, 1));
}
