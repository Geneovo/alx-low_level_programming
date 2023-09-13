#include <stdio.h>

/**
 * main - A program that prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next;
	int i;

	printf("%ld, ", first);
	for (i = 1; i < 50; i++)
	{
		printf("%ld", second);
		next = first + second;
		first = second;
		second = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
