#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 *@c: Function parameter
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
