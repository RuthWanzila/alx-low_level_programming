#include "lists.h"

/**
* dlistint_len - returns no. of elements in linked list
* @h: Ptr to head of linked list
*
* Return: No. of elements in linked list
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
* insert_dnodeint_at_index - insert a new node at a given position.
* @h: ptr to pointer of head of the list.
* @idx: Index of the list where the new node should be added.
* @x: value to be assigned.
* Return: Address of new node / NULL on failure.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int x)
{
dlistint_t *curr, *new;
unsigned int y;

curr = *h;
y = 1;

if ((!curr && idx) || idx > dlistint_len(*h))
return (NULL);
while (y < idx)
{
if (!curr)
return (NULL);
++y;
curr = curr->nxt;
}
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

if (idx)
{
new->prev = curr;
new->nxt = curr->nxt;
curr->nxt = new;
if (new->nxt)
{
curr = new->nxt;
curr->prev = new;
}
}
else
{
new->prev = NULL;
new->nxt = curr;
if (new->nxt)
curr->prev = new;
*h = new;
}
new->x = x;
return (new);
}
