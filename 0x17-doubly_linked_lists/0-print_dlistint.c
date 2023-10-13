#include "lists.h"

/**
* print_dlistint - prints all elements of a linked list
* @h: Pointer to head of linked list
*
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *curr;
size_t n;

curr = h;
n = 0;
while (curr)
{
printf("%d\n", curr->n);
curr = curr->next;
++n;
}
return (n);
}
