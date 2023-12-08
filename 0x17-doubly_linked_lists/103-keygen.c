#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find - this finds the biggest number
 *
 * @un: username
 * @len: length of username
 *
 * Return: the biggest number
 */

int find(char *un, int len)
{
	int i;
	int j;
	unsigned int rand_num;

	i = *un;
	j = 0;

	while (j < len)
	{
		if (i < un[j])
			i = un[j];
		j += 1;
	}

	srand(i ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * mul - this multiplies each char of username
 *
 * @un: username
 * @len: length of username
 *
 * Return: multiplied char
 */

int mul(char *un, int len)
{
	int i;
	int j;

	i = j = 0;

	while (j < len)
	{
		i = i + un[j] * un[j];
		j += 1;
	}

	return (((unsigned int)i ^ 239) & 63);
}

/**
 * gen_char - this generates a random char
 *
 * @un: username
 *
 * Return: a random char
 */

int gen_char(char *un)
{
	int i;
	int j;

	i = j = 0;

	while (j < *un)
	{
		i = rand();
		j += 1;
	}
	return (((unsigned int)i ^ 229) & 63);
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return o
 */

int main(int argc, char *argv[])
{
	char keygen[7];
	int len, i, j;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	i = j = 0;

	while (j < len)
	{
		i = i + argv[1][j];
		j = j + 1;
	}
	keygen[1] = ((char *)alph)[(i ^ 79) & 63];
	/* ----------- f3 ----------- */
	i = 1;
	j = 0;

	while (j < len)
	{
		i = argv[1][j] * i;
		j = j + 1;
	}
	keygen[2] = ((char *)alph)[(i ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[find(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[mul(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[gen_char(argv[1])];
	/* ----------- f7 ----------- */
	keygen[6] = '\0';

	for (i = 0; keygen[i]; i++)
		printf("%c", keygen[i]);
	return (0);
}

