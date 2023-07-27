#include "lists.h"
#include <stddef.h>
/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
list_t *curr;
curr = head;
while (curr != NULL)
{
list_t * next = curr->next;
free(curr->str);
free(curr);
curr = next;
}
}
