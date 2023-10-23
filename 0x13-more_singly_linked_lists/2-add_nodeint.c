#include "lists.h"

/**
 * add_nodeint - adds  a new node at the beginning of a list
 *
 * @head: pointer to the head
 * @n: integer to be created
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	newnode->n = n;
	*head = newnode;
	return (*head);
}
