#include "lists.h"

/**
 * free_listint_safe - frees a listint list
 * @h: pointer to pointer of head of linked list
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t i;
i = 0;
listint_t *current_node, *next_node;
current_node = *h;
next_node = NULL;
while (current_node != NULL)
{
i++;
next_node = current_node->next;
current_node->next = NULL;
free(current_node);
if (next_node >= current_node)
{
*h = NULL;
break;
}
current_node = next_node;
}
*h = NULL;
return (i);
}
