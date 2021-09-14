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
int j;
char *memory = dest, *value = src;
size_t nn = n;

  for (i = j; i < nn; i++)
    memory[i] = value[i];

  return (memory);
}
