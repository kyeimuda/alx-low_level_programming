#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number indicate line length
 *
 */
void print_line(int n)
{
int a = 1;

while (a <= n)
{
_putchar(95);
a++;
}
_putchar('\n');
}
