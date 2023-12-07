#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	dlistint_t *present;

	present = head;
	for (x = 0; present != NULL && x < index; x++)
	{
		present = present->next;
	}

	return (present);
}
