#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function to delete has table
 * @ht: structure that holds the hash table.
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp = NULL, *temp2 = NULL;

if (ht != NULL)
{
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
temp2 = ht->array[i];
while (temp != NULL)
{
temp2 = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = temp2;
}
free(temp);
}
}
free(ht->array);
free(ht);
ht = NULL;
}
