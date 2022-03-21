#include "main.h"

/**
 * _puts - function prints string , followed by a new line.
 * to standard output.
 *@str: is a pointer to caracter array.
 * Return: void
 */
void _puts(char *str)
{
	int j = 1;

	char pl = str[0];

	while (pl != '\0')
	{
		_putchar(pl);
		pl = str[j++];
	}
	_putchar('\n');
}

