#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - programs add arguments and print the result
 * followed by a new line.
 * @argc: counts for all agruments passed on the command line
 * @argv: vector that points to and array of string.
 * each strings corresponds to each argumants passed on the command line.
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int sum = 0;

	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
