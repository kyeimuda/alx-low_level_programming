#include <stdio.h>
#include "main.h"

/**
 * main - prints the file it was complied from
 *
 * Return: the name of the file
 */

int main(void)
{
char c[] = _FILE_;

_putchar(c);

return (0);
}
