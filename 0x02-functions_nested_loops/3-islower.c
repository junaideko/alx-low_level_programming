#include "main.h"
/**
 * _islower(int c) - function checks for lowercase character
 * @c: single letter input or char.
 * Decription: function prints lower case character
 * Return: 1 if c is lowercase or 0 otherwise.
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
