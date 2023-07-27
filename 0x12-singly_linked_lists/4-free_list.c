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
list_t *next;
while (current != NULL)
{
next = curr->next;
free(curr->str);
free(curr);
curr = next;
}
}
