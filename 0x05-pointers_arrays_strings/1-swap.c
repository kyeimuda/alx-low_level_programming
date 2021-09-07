#include "main.h"

/**
 * swap_int - to swap the values of two integers
 * @a @b - integers to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
