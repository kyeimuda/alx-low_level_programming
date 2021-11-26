#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the begining of a linked list
 * @head: dlistint_t pointer to the head of yhe linked list.t
 * @n: element to be inserted in linked list
 *
 * Return: the address of the new element of NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

newnode = malloc(sizeof(dlistint_t));

if (newnode != NULL)
{
newnode->n = n;
newnode->next = *head;
newnode->prev = NULL;

if (*head != NULL)
{
(*head)->prev = newnode;
}
*head = newnode;
return (newnode);
}
return (NULL);
}
