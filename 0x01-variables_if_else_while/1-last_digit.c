#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry point
*Return:Always 0 (Success)
*/
int main(void) /**
*main - Entry point
*/
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;

printf("Last digit of %d is ", n);
if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
if (lastDigit == 0)
{
printf("%d and is 0\n", lastDigit);
}
if (lastDigit < 6)
{
printf("%i and is 0\n", lastDigit);
}
return (0);
}