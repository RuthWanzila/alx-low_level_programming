#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table.
* @size: Size of the table
* Return: Pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;

if (size == 0)
return (NULL);

/* Allocate memory for the new hash table */
new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);

/* Set the size of the hash table */
new_table->size = size;

/* Allocate memory for the array of hash nodes */
new_table->array = calloc(size, sizeof(hash_node_t *));
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

return (new_table);
}
