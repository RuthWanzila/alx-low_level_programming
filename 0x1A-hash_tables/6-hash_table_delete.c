#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
* @ht: The hash table to delete
* Return: None
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *current_node = NULL;
hash_node_t *next_node = NULL;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
current_node = ht->array[i];
while (current_node)
{
next_node = current_node->next;
free(current_node->value);
free(current_node->key);
free(current_node);
current_node = next_node;
}
}

free(ht->array);
free(ht);
}
