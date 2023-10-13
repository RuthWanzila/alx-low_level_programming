#include "lists.h"

/**
* free_dlistint - Frees a linked list
* @head: Pointer to linked list being freed
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *curr;
while (head)
{
curr = head;
head = head->next;
free(curr);
}
}
