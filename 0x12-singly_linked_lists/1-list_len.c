#include "lists.h"

/**
 * list_len - the list length
 *
 * @h: pointer to yhe first node
 *
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
