#include <stdio.h>
#include "main.h"

/**
*main - Entry point
*Return: Always 0 (Success)
*/

void print_alphabet(void);
int main(void)

{
int ch = 'a';
for  ( ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

return (0);
}

