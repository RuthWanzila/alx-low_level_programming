#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of linked list
 * @n: value to store in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last_node, *new_node;
new_node = malloc(sizeof(listint));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
return (new_node);
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
return (new_node);
}
