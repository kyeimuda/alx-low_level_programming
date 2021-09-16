#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to be returned
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
int count = 0;
  
if(*s != 0)
{
count++;
return (count + _strlen_recursion(s + 1));
}
return (count);
}
