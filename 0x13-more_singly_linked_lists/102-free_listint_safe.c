#include "lists.h"

/**
 * free_listint_safe - frees a listint list
 * @h: pointer to pointer of head of linked list
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t size;
size = 0;
listint_t *current, *next;
current = *h;
while (current != NULL)
{
next = current->next;
free(current);
size++;
current = next;
}
*h = NULL;
return (size);
}
