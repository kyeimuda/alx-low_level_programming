#include "lists.h"
/**
 * get_dnodeint_at_index - function that the nth node of a dlistint_t linked list
 * @head: dlistint_t pointer to heaf node.
 * @index: index of the node
 *
 * Return: NULL if the node does not exist or the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int find = 0;

while (find < index)
{
if (head != NULL)
{
head = head->next;
find++;
}
else
{
return (NULL);
}
}
return (head);
}
