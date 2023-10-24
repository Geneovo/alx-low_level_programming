#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node's data
 *
 * @head: pointer to the head
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
