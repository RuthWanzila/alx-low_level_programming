#include  "lists.h"
/**
 * free_listint - frees a listint_t list.
 * Return: void
 * @head: pointer to the head of list
 */
void free_listint(listint_t *head)
{
listint_t *curr;
while (head != NULL)
{
curr = head;
head = head->next;
free(curr);
}
}
