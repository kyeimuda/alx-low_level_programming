#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed into it
 * @argc: arguments
 * @argv: array pointing to argument
 * Return: 0
 */

int main(int argc, char **argv)
{
if (*argv[0] > 0)
printf("%i\n", argc - 1);
return (0);
}
