#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add or update the key/value pair
* @key: The key (non-empty string)
* @value: The value associated with the key
* Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_new_node_t *new_node; /* Head of the linked list */
hash_new_node_t *curr_node;
if (!key || !value || !ht || !ht->array)
return (0);
/* Compute the index for the key */
index = key_index((unsigned char *)key, ht->size);
if (ht->array[index])
{
curr_node = ht->array[index];
/* Walk through the linked list */
while (curr_node && strcmp(curr_node->key, key) != 0)
curr_node = curr_node->next;
if (curr_node && strcmp(curr_node->key, key) == 0)
/* Duplicate the value */
free(curr_node->value);
curr_node->value = strdup(value);
return (1);
}
/* Element not found, create a new node */
new_node = malloc(sizeof(hash_new_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}
/* Insert the new node at the beginning of the linked list */
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
