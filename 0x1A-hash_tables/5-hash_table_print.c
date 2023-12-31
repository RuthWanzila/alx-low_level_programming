#include "hash_tables.h"
/**
* hash_table_print - Prints the contents of a hash table
* @ht: The hash table to print
* Return: None (void)
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
unsigned int flag;

flag = 0;
if (ht == NULL)
return;
printf("{");
if (ht->array == NULL)
{
printf("}\n");
return;
}
for (i = 0; i < ht->size; i++)
{
/* Traverse the linked list at each index */
while (ht->array[i] != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
flag = 1;
ht->array[i] = (ht->array[i])->next;
}
}
printf("}\n");
}
