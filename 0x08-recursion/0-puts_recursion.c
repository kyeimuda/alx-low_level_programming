#include "main.h"

/**
 * _puts_recursion - function to print a string
 * @s: pointer to string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
if (*s)
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
_putchar('\n');
}
