#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list.
 * @head: pointer to head of list
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
int result;
result = 0;
while (head != NULL)
{
result += head->n;
head = head->next;
}
return (result);
}
