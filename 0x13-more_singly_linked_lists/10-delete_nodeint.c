#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
if (head == NULL || *head == NULL)
{
return (-1);
}
listint_t *current_node = *head, *previous_node = NULL;
for (i = 0; current_node != NULL && i < index; i++)
{
previous_node = current_node;
current_node = current_node->next;
}
if (current_node == NULL)
{
return (-1);
}
if (previous_node == NULL)
{
*head = current_node->next;
}
else
{
previous_node->next = current_node->next;
}
free(current_node);
return (1);
}
