#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to sting
 */

char *str_concat(char *s1, char *s2)
{
char *ar = NULL;
unsigned int i = 0, j = 0, k;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++

ar = malloc((i + j +1) * sizeof(char));

if ( ar == NULL)
return (NULL);

for (k = 0; k < j; k++)
{
ar[i] = s2[k];
i++
}
ar[i] = '\0';
return (ar);
free(ar);
}
