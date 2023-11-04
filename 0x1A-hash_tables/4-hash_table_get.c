#include "hash_tables.h"
/**
* hash_table_get - Retrieves the value associated with a key
* @ht: The hash table to look into
* @key: The key to search for
* Return: The value associated with the key, or NULL if the key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned int idx;
hash_node_t *curr_node;

if (!key || !ht || !ht->array)
return (NULL);

/* Compute the idx of the key */
idx = key_idx((unsigned char *)key, ht->size);

/* Traverse the linked list at the idx position */
curr_node = ht->array[idx];
while (curr_node != NULL)
{
/* Compare the key with the current node's key */
if (strcmp(curr_node->key, key) == 0)
{
/* Return the value associated with the key */
return (curr_node->value);
}

/* Move to the next node in the linked list */
curr_node = curr_node->next;
}

/* The key couldn't be found */
return (NULL);
}
