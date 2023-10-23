#include "lists.h"

/**
 * free_listint - function that frees a listint list
 *
 * @head: pointer to the head
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
