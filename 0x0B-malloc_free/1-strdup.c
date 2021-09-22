#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a sting into a new allocated memory
 * @str: string to copy from
 * Return: a pionter
 */

char *_strdup(char *str)
{
int i;
int j = 0;
char *ar;

if (str == NULL)
return (NULL);

while (str[j] != '\0')
j++;

ar = malloc((j + 1) * sizeof(char));
for (i = 0; i <= j; i++)
ar[i] = str[i];

if (ar == NULL)
return (NULL);
return (ar);
free(ar);
}
