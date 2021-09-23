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
char *ar;
int end1, end2, i = 0;

if (s1 == NULL || s2 == NULL)
s1 = s2 = "";

for (end1 = 0; end1 <= *s1; end1++)
{
}

for (end2 = 0; end2 <= *s2; end2++)
{
}

ar = malloc(sizeof(char) * (end1 + end2 + 1));

if (ar == NULL)
return (NULL);

while (*s1)
{
ar[i] = *s1;
i++;
s1++;
}

while (*s2)
{
ar[i] = *s2;
i++;
s2++;
}
return (ar);
}
