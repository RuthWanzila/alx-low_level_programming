#include "lists.h"

/**
* add_dnodeint_end - Adds new node at end of a list
* @head: Pointer to pointer of first node
* @n: Integer to store in node
*
* Return: Address of new element, or NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *curr;

curr = *head;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;
if (!*head)
{
new->prev = NULL;
*head = new;
}
else
{
while (curr->next)
curr = curr->next;
new->prev = curr;
curr->next = new;
}

return (new);
}
