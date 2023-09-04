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
listint_t *curr;
unsigned int x;
curr = head;
x = 0;
while (x < index)
{
if (curr)
curr = curr->next;
else
return (NULL);
x++;
}
if (curr)
return (curr);
else
return (NULL);
}
