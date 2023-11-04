#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: Hash table to add or update the key/value pair
* @key: key
* @value:value associated with the key
* Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;
hash_node_t *curr_node;
if (!key || !value || !ht || !ht->array)
return (0);
/* Compute the index of the key */
index = key_index((unsigned char *)key, ht->size);
if (ht->array[index])
{
/* Walk through the linked list */
curr_node = ht->array[index];
/* Check if node with the same key already exists */
while (curr_node && strcmp(curr_node->key, key) != 0)
curr_node = curr_node->next;
if (curr_node && strcmp(curr_node->key, key) == 0)
{
/* Update the value */
free(curr_node->value);
curr_node->value = strdup(value);
return (1);
}
}
/* Create a new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
free(new_node);
return (0);
new_node->value = strdup(value);
if (new_node->value == NULL)
free(new_node->key);
free(new_node);
return (0);
/* Insert the new node at the beginning of the linked list */
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
