#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case.
 * Decription: function prints lower case alphabet
 * follwed by a new line.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
