#include "hash_tables.h"

/**
 * hash_table_get - function that  retrieves a value associated with a key
 * @ht: input hash table
 * @key: input key
 * Return: value associated with the element, or NULL if key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *element = NULL;

if (!ht || !key || !*key)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
element = ht->array[index];
while (element)
{
if (strcmp(element->key, key) == 0)
return (element->value);
element = element->next;
}
return (NULL);
}
