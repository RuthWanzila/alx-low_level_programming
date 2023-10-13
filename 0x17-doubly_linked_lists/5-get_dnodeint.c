#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a linked list
* @head: Pointer to head of the list
* @index: Index of node   from 0
*
* Return: NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *curr;
unsigned int i;

curr = head;
i = 0;

while (curr)
{
if (i == index)
return (curr);
curr = curr->next;
++i;
}
return (NULL);
}
