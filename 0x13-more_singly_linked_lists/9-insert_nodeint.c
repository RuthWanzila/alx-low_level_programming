#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a singly linked list
 * @head: pointer to the first node of the list
 * @idx: index of the list where the new node should be added.
 * @n: value to store in node
 * Return:  address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *curr;
unsigned int count;
if (head == NULL)
return (NULL);
curr = *head;
for (count = 1; curr && count < idx; count++)
{
curr = curr->next;
if (curr == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
if (idx == 0)
{
*head = new;
new->next = curr;
}
else if (curr->next)
{
new->next = curr->next;
curr->next = new;
}
else
{
new->next = NULL;
curr->next = new;
}
return (new);
}
