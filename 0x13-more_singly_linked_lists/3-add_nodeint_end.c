#include "lists.h"

/**
 * add_nodeint_end - this adds a new node at the end of a list
 *
 * @head: pointer to the head
 * @n: integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nend;
	listint_t *temp;

	(void)temp;

	nend = malloc(sizeof(listint_t));

	if (nend == NULL)
		return (NULL);

	nend->n = n;
	nend->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = nend;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next= nend;
	}
	return (*head);
}
