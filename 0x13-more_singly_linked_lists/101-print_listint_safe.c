#include "lists.h"
/**
 * print_listint_safe - prints a singly linked list
 * and handles loops in the list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *curr, *j;
size_t i;
curr = head;
if (curr == NULL)
exit(98);

i = 0;
while (curr != NULL)
{
j = curr;
curr = curr->next;
i++;
printf("[%p] %d\n", (void *)j, j->n);
if (j < curr)
{
printf("-> [%p] %d\n", (void *)curr, curr->n);
break;
}
}
return (i);
}
