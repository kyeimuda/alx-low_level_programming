#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: input ht
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp = NULL;
char *punc = "";

if (ht != NULL)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
printf("%s'%s': '%s'", punc, temp->key, temp ->value);
punc = ", ";
temp = temp->next;
}
}
printf("}\n");
}
else
return;
}
