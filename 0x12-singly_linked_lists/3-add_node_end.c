#include "lists.h"

/**
 * add_node_end - this adds a new node at the end
 * of list_t
 * @head: pointer to the list_t
 * @str: string to put in the new node
 * Return: the address of the new list
 * or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *menu;

	if (str != NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	else
	{
		menu = *head;
		while (menu->next)
			menu = menu->next;

		menu->next = node;
		return (menu);
	}
	}
	return (NULL);
}

/**
 * _strlen - length of string
 * @s: string to count
 * Return: string length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
