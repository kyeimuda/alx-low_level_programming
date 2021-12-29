#include <stdio.h>

/**
 * main - prints the combination of 3 numbers
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c;

for (a = 48; a < 56; a++)
{
for (b = 49; b < 57; b++)
{
for (c = 50; c < 58; c++)
{
if (a == b || b == c || a == c)
{
continue;
}
if (c < b || b < a)
continue;
putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
break;
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
