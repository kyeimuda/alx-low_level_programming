#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number if coins to make a change for an amount of money
 * @argc: the size of the argv array
 * @argv: the array of the programme
 *Return: 0 or 1
 */

int main(int argc, char **argv)
{
int i, amount, coins = 0;
int values[] = {25, 10, 5, 2, 1};

if (argc - 1 != 1)
{
printf("%s\n", "Error");
return (1);
}
amount = atoi(argv[1]);

for (i = 0; i < 5; i++)

while (values[i] <= amount)
{
coins++;
amount -= values[i];
}
printf("%i\n", coins);
return (0);
}
