#include "lists.h"

/**
* dlistint_len - Returns number of elements in linked list
* @h: Pointer to first node of linked list
*
* Return: Number of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *curr;
size_t x;

curr = h;
x = 0;
while (curr)
{
curr = curr->next;
++x;
}
return (x);
}
