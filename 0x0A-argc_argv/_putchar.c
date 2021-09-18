#include <unistd.h>

/**
 * _putchar - writes a characterbto standard output
 * @c: the character to be writen
 * Return: on success 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
