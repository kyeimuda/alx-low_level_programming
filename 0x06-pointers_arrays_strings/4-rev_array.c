#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a - pointer to array
 * @n: number of elements of an array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
  int n, i, temp;
for(i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
for(i = 0; i < n; i++)
{
printf("%d, ", a[i])
}
}
