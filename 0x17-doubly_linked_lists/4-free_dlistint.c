#include "lists.h"
/**
 * free_dlistint - function that frees list dlistint
 * @head: pointer to head node
 *
 */
void free_dlistint(dlistint_t *head)
{
if (head != NULL)
{
free_dlistint(head->next);
free(head);
}
}
