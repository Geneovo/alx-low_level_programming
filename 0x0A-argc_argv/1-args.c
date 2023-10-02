#include <stdio.h>

/**
 * main - This prints the number of arguments passed into it
 *
 * @argc: number of the command line argument
 * @argv: array that contains the program command line arg..
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
