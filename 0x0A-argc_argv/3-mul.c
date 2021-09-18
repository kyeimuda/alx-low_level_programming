#include <stdio.h>
#include "main.h"

/**
 * main - prints the the results of multiplication followed by a new line
 * @argc: counts number of arguments typed
 * @argv: array that points to typed argumen\
ts
 * Return: 0
 */

int main(int argc, char agrv[])
{
if  (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
else
{
printf("Error\n");
return (1);
}
}
