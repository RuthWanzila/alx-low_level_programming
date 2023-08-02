#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to pointer to the head node of the list
 *
 * Return: the data (n) of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *current;
int n;
if (head == NULL || *head == NULL)
return (0);
current = *head;
n = current->n;
*head = current->next;
free(current);
return (n);
}
