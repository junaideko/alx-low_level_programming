#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: The string
 * @c: The character
 *
 * Return: Pointer to the character
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
