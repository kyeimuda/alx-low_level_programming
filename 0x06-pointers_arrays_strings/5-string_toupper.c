#include "main.h"

/**
 * string_toupper - changes all lower case to uppercase
 * Return: Always 0
 */
char *string_toupper(char *)
{
  int i;

  for(i=0, str[i]!='\0'; i++)
    {
      if(str[i]>='a' && str[i]<='z')
	{
	  str[i] = str[i] - 32;
	}
    }
}