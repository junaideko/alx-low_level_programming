#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - programs prints the minimum number of coins to make change for
 * an amount of money
 * @argc: counts for all agruments passed on the command line
 * @argv: vector that points to and array of string.
 * each strings corresponds to each argumants passed on the command line.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	n = atoi(argv[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
