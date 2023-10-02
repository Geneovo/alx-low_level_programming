#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: string 1 pointer to a char
 * @src: string 2 pointer to a char
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
