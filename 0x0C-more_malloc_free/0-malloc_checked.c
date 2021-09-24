#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: pointer to new memory
 */

void *malloc_checked(unsigned int b)
{
void *n;

n = malloc(b);

if (n == NULL)
exit(98);
return (n);
}
