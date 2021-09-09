#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two string using at most n bytes
 * @dest: destination
 * @src: source
 * @n: maximum number of characters to be appended
 */

char *_strncat(char *dest, char* src, int n)
{
char *ptr = dest + strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
*ptr = '\0';
strncat(dest, src, n);
return (dest);
}
