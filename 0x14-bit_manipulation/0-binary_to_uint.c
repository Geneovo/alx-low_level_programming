#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to the binary
 *
 * Return: the converted number, or 0 if invalid character
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, base_two;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			num += base_two;
		}
	}
	return (num);
}
