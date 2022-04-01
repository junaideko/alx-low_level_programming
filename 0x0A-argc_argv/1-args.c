#include "main.h"
#include <stdio.h>

/**
 * main - programs prints its name followed by a new line.
 * @argc: counts for all agruments passed on the command line
 * @argv: vector that points to and array of string.
 * each strings corresponds to each argumants passed on the command line.
 * Return: always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);/*to get only the number of arg aside its nam*/
	return (0);
}
