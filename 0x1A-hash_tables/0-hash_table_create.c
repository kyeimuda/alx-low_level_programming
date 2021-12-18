#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_create - function that a hash table.
 * @size: size of the hash table.
 * Return: NULL if something goes wrong and a pointer to the newly created hash table if table is created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
if(!size)
return (NULL);
table = malloc(sizeof(hash_table_t));
if(!table)
return (NULL);
table->size = size;
table->array = malloc(sizeof(hash_node_t *) * size);
if(!table->array)
{
free(table);
return (NULL);
}
return (table);
}
