#include "main.h"

/**
 * string_toupper - function vhanges all lower case letter to upper
 * case.
 * @s: array string
 *
 * Return: character in upper case
 */
char *string_toupper(char *s)
{
	int j, f;

	f = 'A' - 'a';
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] += f;
	}
	return (s);
}
