#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t bret = 0;
int sep;
listint_t *cool;

if (!h || !*h)
return (0);

while (*h)
{
sep = *h - (*h)->next;
if (sep > 0)
{
bret++;
cool = (*h)->next;
free(*h);
*h = cool;
}
else
{
free(*h);
*h = NULL;
break;
bret++;
}
}

*h = NULL;

return (bret);
}
