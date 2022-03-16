#include "main.c"
/**
 * _isalpha - checks for alphabet character
 * @c: c is a letter lowercase or uppercase
 *
 * Return: 1 if c a letter lowercase or uppercase
 * 0 otherwise
 */
int _isalphabet(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A)' && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}
