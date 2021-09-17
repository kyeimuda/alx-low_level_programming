#include <stdio.h>

/**
 * prime_checker - checks if a number is a prime number
 * @n: number to check
 * @f: number to check with
 * Return: 1 if prime number and 0 if not
 */

int prime_checker(int n, int a)
{
if(n % a == 0 && a != (n / 2))
return (0);
 else if (a >= (n / 2))
return (1);
else
return (prime_checker(n, a + 1));
}

/**
 * is_prime_number - return 1 if integer is a prime number
 * @n: number to check
 * Return: 1 if prime or 0 if not prime
 */

int is_prime_number(int n)
{
if(n > 1)
return (prime_checker(n, 2));
else if(n < 0)
return (0);
return (0);
}
