#include "lists.h"

/**
 * free_listint_safe - frees a listint list
 * @h: pointer to pointer of head of linked list
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *curr, *x;
size_t y;
y = 0;
curr = *h;
while (curr != NULL)
{
y++;
x = curr;
curr = curr->next;
free(x);
if (x < curr)
break;
}
*h = NULL;
return (y);
}
