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
int j;
char *ar;

if (str == NULL)
return (NULL);

for (j = 0; j < *str; j++)
{
}
j += 1;

ar = malloc(sizeof(chat) * j);

for (i = 0; i < j; i++)
ar[i] = str[i];

if (ar == NULL)
return (NULL);

return (ar);
}
