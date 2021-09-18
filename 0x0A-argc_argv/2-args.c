#include <stdio.h>
#include "main.h"

/**
 * main - will print its name followed by a new line
 * @argc: counts number of arguments typed
 * @argv: array that points to typed arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
