#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
int total = 0;
va_list para;
unsigned int i;
int num;

va_start(para, n);
if (n == 0)
{
return (0);
}
for(i = 0; i < n; i++)
{
num = va_arg(para, unsigned int);
total += num;
}
va_end(para);

return (total);
}
