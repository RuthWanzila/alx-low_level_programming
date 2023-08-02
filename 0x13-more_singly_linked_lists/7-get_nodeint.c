#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node of the linked list, or NULL if the node
 * does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
listint_t *curr;
for (i = 0, current = head;
current != NULL && i < index;
i++, current = current->next)
;
if (i < index || current == NULL)
return (NULL);
return (current);
}
