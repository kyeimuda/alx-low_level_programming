#include "main.h"

/**
 * _strlen_recursion - to find the length of a string
 * @s: the string who's length is to found
 * Return: length
 */

int _strlen_recursion(char *s)
{
int count = 0;

if (*s != 0)
{
count++;
return (count + _strlen_recursion(s + 1));
}
return (count);
}

/**
 * palindrome_check - check palindrome
 * @s: string to check
 * @l: string length
 * Return: 1 when palindrome and 0 if not
 */

int palindrome_check(char *s, int l)
{
if (l <= 1)
return (1);
if (*s != s[l - 1])
return (0);
else
return (palindrome_check((s + 1), (l - 2)));
}

/**
 * is_palindrome - if a string is a palindrome
 * @s: string to check if it is a palindrome
 * Return: 1 if palindrome if not 0
 */

int is_palindrome(char *s)
{
int l = _strlen_recursion(s);

if (l <= 1)
return (1);
return (palindrome_check(s, l));
}
