#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own
 * main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%.2hhx", opc[i]);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
