#include "main.h"

/**
 * print_line - function draws a straight line in the  terminal
 * @n: is the number of times the character under score should be printed.
 * Return: Always void.
 */
void print_line(int n)
{
	int i;

	char us = '_';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(us);
		}
		_putchar('\n');
	}
}
