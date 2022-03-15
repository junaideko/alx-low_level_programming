#include "main.h"

/**
 * main - the prototype void print_alphabet(void) print
 * the alphabet in lower case follwed by a new line.
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
