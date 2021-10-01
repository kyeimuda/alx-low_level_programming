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
int i;

va_start(para, n);
for(i = 0; i < n; i++)
{
total += va_arg(para, int);
}
va_end(para);

return (total);
}
