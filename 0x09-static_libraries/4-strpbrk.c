#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: function parameter
 * @accept: functtion parameter
 *
 * Return: pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	for (; *s != '\0'; s++)
	{
		temp = accept;
		for (; *temp != '\0'; temp++)
		{
			if (*s == *temp)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
