#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node of the linked list, or NULL if the node
 * does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *current_node;
current_node = head;
unsigned int i;
i = 0;
while (current_node != NULL && i < index)
{
current_node = current_node->next;
i++;
}

return ((i == index) ? current_node : NULL);
}
