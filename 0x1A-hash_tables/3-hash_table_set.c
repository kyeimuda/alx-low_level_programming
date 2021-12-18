#include "hash_tables.h"

/**
 * hash_table_set - function that  adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: input keyy
 * @value: value associated with the key.
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *element, *new_element;

if (!ht || !key || !value)
return (0);
index = key_index((const unsigned char *)key, ht->size);
element = ht->array[index];
while (element)
{
if (strcmp(element->key, key) == 0)
{
free(element->value);
element->value = strdup(value);
if (!element->value)
return (0);
return (1);
}
element = element->next;
}
new_element = malloc(sizeof(hash_node_t));
if (!new_element)
return (0);
new_element->key = strdup(key);
if (!new_element->key)
return (0);
new_element->value = strdup(value);
if (!new_element->value)
return (0);
new_element->next = ht->array[index];
ht->array[index] = new_element;
return (1);
}
