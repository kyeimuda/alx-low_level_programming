#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character in array
 * Return: a pionter if successful or Null if not successful
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;

ar = malloc(sizeof(char) * size);
if (size == 0 || ar == NULL)
return (NULL);

for (i = 0; i < size; i++)
ar[i] = c;
return (ar);
}
