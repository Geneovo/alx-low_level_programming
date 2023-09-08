#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
