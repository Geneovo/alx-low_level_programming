#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * of a dlistint_t linked list
 *
 * @head: head of the element
 * Return: sum of all the data, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *present = head;

	while (present != NULL)
	{
		total += present->n;
		present = present->next;
	}

	return (total);
}
