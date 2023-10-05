#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: pointer to the concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}
