#include <stdio.h>

/**
 * main - Each new term in the Fibonacci sequence is generated
 *
 * Return: 0
 */
int main(void)
{
	long int sum = 0;
	long int first = 1;
	long int second = 2;
	long int next;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;
		next = first + second;
		first = second;
		second = next;
	}

	printf("%ld\n", sum);
	return (0);
}
