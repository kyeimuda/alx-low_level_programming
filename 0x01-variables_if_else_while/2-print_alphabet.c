#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
char low_alpha;

for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
putchar(low_alpha);
putchar('\n');
return (0);
}
