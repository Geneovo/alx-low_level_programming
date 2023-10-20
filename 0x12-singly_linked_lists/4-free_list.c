#include "lists.h"

/**
 * free_list - frees a list that links
 * @head: pointer to the linked node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *menu;

	while (head)
	{
		menu = head;
		head = head->next;
		free(menu->str);
		free(menu);
	}
	free(head);
}
