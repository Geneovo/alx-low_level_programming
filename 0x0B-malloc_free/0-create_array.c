#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This creates an array of chars
 *
 * @size: input for the size of the array in int
 * @c: stores the strings of char
 *
 * Return: a pointer to the base char c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
