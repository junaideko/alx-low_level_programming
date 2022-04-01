#include "main.h"
#include <stdio.h>

/**
 * main - programs prints its name followed by a new line.
 * @argc: counts for all agruments passed on the command line
 * @argv: vector that points to and array of string.
 * each strings corresponds to each argumants passed on the command line.
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
