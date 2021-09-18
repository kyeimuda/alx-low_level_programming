#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed into it
 * @argc: arguments
 * @argv: array pointing to argument
 * Return: 0
 */

int main(int argc, _attribute_((unused)) char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
}
printf("%d\n", i - 1);
return (0);
}
