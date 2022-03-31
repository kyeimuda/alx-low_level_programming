#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first value in the array
 * @size: size of the array
 * @value: value being searched for
 * Return: the number being searched or -1 if not found
 **/

int linear_search(int *array, size_t size, int value)
{
  size_t i;

if (array == NULL)
{
return (-1);


for (i = 0; i < size; i++)
{
printf("Value checked array[%li] = [%i]\n", i, array[i]);
if (value == array[i])
{
return (i);
}
}
return (-1);
}
