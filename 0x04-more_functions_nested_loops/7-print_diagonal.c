#include "main.h"

/**
 * print_diagonal - function prints a diagonal line on the teminal.
 * @n: is the number of times the character slash should be printed.
 *
 * Return: Always void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
