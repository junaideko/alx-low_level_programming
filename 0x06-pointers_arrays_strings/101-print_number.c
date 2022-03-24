#include "main.h"

/**
 * print_number - function prints an integer.
 * @i: is an integer
 * Return: Always void.
 */
void print_number(int i)
{
	unsigned int j;

	if (i < 0)
	{
		j = -i;
		_putchar('-');
	}
	else
		j = i;
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
