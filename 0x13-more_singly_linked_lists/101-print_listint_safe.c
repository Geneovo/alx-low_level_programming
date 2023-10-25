#include "lists.h"

/**
 * free_listp - frees a linked list
 *
 * @head: pointer to head
 *
 * Return: nothing
 */
void free_listp(listp_t **head)
{
	listp_t *old;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((old = new) != NULL)
		{
			new = new->next;
			free(old);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 *
 * @head: pointer to head
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t newnode = 0;
	listp_t *slow, *fast;

	slow = NULL;
	while (head != NULL)
	{
		fast = malloc(sizeof(listp_t));

		if (fast == NULL)
			exit(98);
		fast->p = (void *)head;
		fast->next = slow;
		slow = fast;

		while (slow->next != NULL)
		{
			slow = slow->next;
			if (head == slow->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&slow);
				return (newnode);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		newnode++;
	}

	free_listp(&slow);
	return (newnode);
}
