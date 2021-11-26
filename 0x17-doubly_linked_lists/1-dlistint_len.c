#include "lists.h"
/**
 * dlistint_len - function that returns number elements in a linked list
 * @h: pointer to head node.
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
int no_element = 0;

while (h != NULL)
{
h = h->next;
no_element++;
}
return (no_element);
}
