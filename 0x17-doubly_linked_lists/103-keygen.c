#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pwd[7], *d;
	int x = strlen(argv[1]), y, z;

	d = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	z = (x ^ 59) & 63;
	pwd[0] = d[z];

	z = 0;
	for (y = 0; y < x; y++)
		z += argv[1][y];
	pwd[1] = d[(z ^ 79) & 63];

	z = 1;
	for (y = 0; y < x; y++)
		z *= argv[1][y];
	pwd[2] = d[(z ^ 85) & 63];

	z = 0;
	for (y = 0; y < x; y++)
	{
		if (argv[1][y] > z)
			z = argv[1][y];
	}
	srand(z ^ 14);
	pwd[3] = d[rand() & 63];

	z = 0;
	for (y = 0; y < x; y++)
		x += (argv[1][y] * argv[1][y]);
	pwd[4] = d[(z ^ 239) & 63];

	for (y = 0; y < argv[1][0]; y++)
		z = rand();
	pwd[5] = d[(z ^ 229) & 63];

	pwd[6] = '\0';
	printf("%s", pwd);
	return (0);
}
