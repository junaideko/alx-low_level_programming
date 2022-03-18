#include "main.h"

/**
 * print_triangle - function prints a triangle followed by a new line.
 * @size: size of triangle and is an integer.
 *
 * Return: Always void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size >= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
