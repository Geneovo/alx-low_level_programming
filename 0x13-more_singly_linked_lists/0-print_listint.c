#include "lists.h"

/**
 * print_listint - This prints all the element of a list
 *
 * @h: head of list
 *
 * Return: numbers of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t e;

	if (h == NULL)
		return (0);

	for (e = 0; h != NULL; e++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (e);
}
