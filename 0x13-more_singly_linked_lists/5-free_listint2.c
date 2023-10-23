#include "lists.h"

/**
 * free_listint2 - this frees a listint list
 *
 * @head: pointer to head
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
