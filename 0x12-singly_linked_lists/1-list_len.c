#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the  head of list
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
size_t x;
x = 0;
while (h != NULL)
{
x++;
h = h->next;
}
return (x);
}
