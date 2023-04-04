#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t digit = 0;

while (h)
{
digit++;
printf("%d\n", h->n);
h = h->next;
}

return (digit);
}
