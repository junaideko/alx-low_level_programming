#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - programs prints its name followed by a new line.
 * @argc: counts for all agruments passed on the command line
 * @argv: vector that points to and array of string.
 * each strings corresponds to each argumants passed on the command line.
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
		puts("Error");
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
