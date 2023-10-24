#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: pointer to head
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *back = *head;
	unsigned int i;

	if (back == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(back);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (back->next == NULL)
			return (-1);
		back = back->next;
	}

	tmp = back->next;
	back->next = tmp->next;
	free(tmp);
	return (1);
}
