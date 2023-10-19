#include "lists.h"

/**
* sum_dlistint - Calculates sum of all the data (n) of a linked list.
* @head: Pointer to head of a linked list
* Return: sum of all the data (n) of a linked list or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *curr;
int sum;

curr = head;
sum = 0;

while (curr)
{
sum += curr->n;
curr = curr->next;
}
return (sum);
}
