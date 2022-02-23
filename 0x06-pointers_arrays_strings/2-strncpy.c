#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of characters of source string that needs to be copied
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

i = i;
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
