#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t num = 0;
const list_t *curr = h;
while (curr != NULL)
{
printf("[%d] %s\n", curr->len, curr->str != NULL ? curr->str : "(nil)");
num++;
curr = curr->next;
}
return (num);
}
