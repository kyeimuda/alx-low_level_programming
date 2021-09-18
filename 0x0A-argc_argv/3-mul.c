#include <stdio.h>
#include <stdlib.h>
#include "main.h"

en/**
 * main - prints the the results of multiplication followed by a new line
 * @argc: counts number of arguments typed
 * @argv: array that points to typed argumen\
ts
 * Return: 0
 */

int main(int argc, char *argv[])
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
