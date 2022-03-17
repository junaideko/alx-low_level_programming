#include "main.h"

/**
 * _isupper - is a function that checks for upper case character.
 * @c: is a character
 * Return: 1 if c is upper case and 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
