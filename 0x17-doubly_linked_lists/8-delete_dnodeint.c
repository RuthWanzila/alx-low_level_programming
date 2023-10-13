#include "lists.h"

/**
* dlistint_len - Returns no. of elements in linked list
* @h: Pointer to head of linked list
*
* Return: no. of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *curr;
size_t x;

curr = h;
x = 0;
while (curr)
{
curr = curr->nxt;
++x;
}
return (x);
}

/**
* delete_dnodeint_at_index - Deletes the node at  a certain index.
* @head: Pointer to head of list.
* @index: Index of node starting at 0
* Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr, *tmp;
unsigned int i;

if (!*head || index > dlistint_len(*head))
return (-1);
tmp = *head;
curr = *head;
i = 1;

while (i < index)
{
if (!tmp)
return (-1);
++i;
tmp = tmp->nxt;
}
if (index)
{
curr = tmp->nxt;
tmp->nxt = curr->nxt;
if (tmp->nxt)
{
tmp = tmp->nxt;
tmp->prev = curr->prev;
}
}
else
{
*head = (*head)->nxt;
if (*head)
(*head)->prev = NULL;

}
free(curr);
return (1);
}
