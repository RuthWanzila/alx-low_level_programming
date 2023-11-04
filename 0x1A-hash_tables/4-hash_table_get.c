#include "hash_tables.h"
/**
* hash_table_get - Retrieves the value associated with a key
* @ht: The hash table to look into
* @key: The key to search for
* Return:value associated with the key, or NULL if the key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned int index;
hash_node_t *node;

if (!key || !ht || !ht->array)
return (NULL);

/* Compute the index of the key */
index = key_index((unsigned char *)key, ht->size);

/* Set 'node' to point to the linked list at the computed index */
node = ht->array[index];

/* Traverse the linked list */
while (node != NULL)
{
/* Compare the key with the current node's key */
if (strcmp(node->key, key) == 0)
{
/* Return the value associated with the key */
return (node->value);
}

/* Move to the next node in the linked list */
node = node->next;
}

/* The key couldn't be found */
return (NULL);
}
