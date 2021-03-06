#include "main.h"
#include <string.h>
/**
 *_memset - fills memory with a constant byte
 * @s: A pointer to the area to be filled
 * @b: the character to be filled with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
size_t nn = n;
char *memory = s, value = b;

for (i = 0; i < nn; i++)
memory[i] = value;

return (memory);
}
