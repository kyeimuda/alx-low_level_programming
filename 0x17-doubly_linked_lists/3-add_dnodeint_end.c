#include "lists.h"
/**
 * add_dnodeint_end - functiin that adds a new node at the end if a linked list
 * @head: dlistint_t pointer to head nodrt
 * @n: data to insert in the list
 *
 * Return: the address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *endnode = *head;

newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
{
return (NULL);
}

newnode->n = n;
newnode->next = NULL;

if (endnode != NULL)
{
while (endnode->next != NULL)
{
endnode = endnode->next;
}
endnode->next = newnode;
}
else
{
*head = newnode;
}
newnode->prev = endnode;
return (newnode);
}
