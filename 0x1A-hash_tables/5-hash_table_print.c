#include "hash_tables.h"
/**
* hash_table_print - Prints the contents of a hash table
* @ht: The hash table to print
* Return: None (void)
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x;
unsigned int flag;
x = 0;
flag = 0;
if (ht == NULL)
return;
printf("{");
if (ht->array == NULL)
{
printf("}\n");
return;
}
for (x = 0; x < ht->size; x++)
{
/* Traverse the linked list at each index */
while (ht->array[x] != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", (ht->array[x])->key, (ht->array[x])->value);
flag = 1;
ht->array[x] = (ht->array[x])->next;
}
}
printf("}\n");
}
