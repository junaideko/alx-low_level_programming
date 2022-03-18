#include "main.h"

/**
 * print_number - function prints an integer
 * @n: interger to be printed.
 *
 * Return: Always void
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) = '0')
}
