#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given index
 *
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the element
 *
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *new, *present;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	present = *h;
	for (x = 0; x < idx - 1 && present != NULL; x++)
	{
		present = present->next;
	}

	if (present == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = present;
	new->next = present->next;

	if (present->next != NULL)
		present->next->prev = new;
	present->next = new;

	return (new);
}
