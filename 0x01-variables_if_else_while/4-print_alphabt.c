#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
