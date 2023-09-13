#include <stdio.h>

/**
 * main - A program that finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next;
	int count = 2;

	printf("%lu, %lu", first, second);

	while (count < 98)
	{
		next = first + second;
		printf(", %lu", next);

		first = second;
		second = next;
		count++;
	}

	printf("\n");
	return (0);
}
