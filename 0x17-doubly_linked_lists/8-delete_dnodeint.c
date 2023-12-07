#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: head of the list
 * @index: index of the node to be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *present, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	present = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(present);
		return (1);
	}

	for (x = 0; x < index && present != NULL; x++)
	{
		present = present->next;
	}

	if (present == NULL)
		return (-1);

	temp = present->prev;
	temp->next = present->next;

	if (present->next != NULL)
		present->next->prev = temp;

	free(present);
	return (1);
}
