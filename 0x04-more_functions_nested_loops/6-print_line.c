#include "main.h"

/**
 * print_line - function draws a straight line in the  terminal
 * @n: is the number of times the character under score should be printed.
 * Return: Always void.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
