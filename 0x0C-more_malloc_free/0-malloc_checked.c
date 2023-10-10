#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: size of the memory allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
