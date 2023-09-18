#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int r = 0;
	int sign = 1;

	if (s != NULL)
	{
		int i = 0;

		while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				sign *= -1;
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10 + (s[i] - '0');
			i++;
		}
		r *= sign;
		return (r);
	}
	return (0);
}
