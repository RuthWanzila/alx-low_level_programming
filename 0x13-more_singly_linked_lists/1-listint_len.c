#include "lists.h"
#include <stddef.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t y;
y = 0;
while (h != NULL)
{
y++;
h = h->next;
}
return (y);
}
