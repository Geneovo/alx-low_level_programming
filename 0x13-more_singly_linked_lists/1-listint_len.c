#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: head of list
 *
 * Return: number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t e;

	if (h == NULL)
		return (0);

	for (e = 0; h != NULL; e++)
	{
		h = h->next;
	}
	return (e);
}
