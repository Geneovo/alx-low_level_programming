#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to head
 *
 * Return: address of the node or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tose, *lare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tose = head->next;
	lare = (head->next)->next;

	while (lare)
	{
		if (tose == lare)
		{
			lare = head;

			while (tose != lare)
			{
				tose = tose->next;
				lare = lare->next;
			}
			return (tose);
		}
		tose = tose->next;
		lare = (lare->next)->next;
	}
	return (NULL);
}
