#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 *
 * @h: pointer to head
 *
 * Return: size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t c = 0;

	if (h == NULL)
		return (0);

	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
		c++;

		if (curr == *h)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (c);
}
