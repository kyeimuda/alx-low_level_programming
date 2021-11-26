#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all data
 * @head: dlistint_t pointer to head node
 *
 * Return: the sum of all data in a list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum = sum + head->n;
head = head->next;

}
return (sum);
}
