#include "main.h"
#include <string.h>

/**
 *_memcpy - copies memory area
 * @dest: the desrination array where the content is to be copied
 * @src: the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *memory = dest, *value = src;
size_t nn = n;

  for (i = 0; i < nn; i++)
    memory[i] = value[i];

  return (memory);
}
