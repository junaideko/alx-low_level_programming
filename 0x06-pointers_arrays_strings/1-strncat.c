#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination array string, large enough to
 * concatenate the resuiting string plus its null-character.
 * @src: string to be appended.
 * @n: maximum number of characters to be appended
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t, e;

	for (t = 0; deat[t] != '\0'; t++)
	{
		for (e = 0; src[e] != '\0' && e < n; e++)
		{
			dest[t] = src[e];
			t++;
		}
	}
	dest[t] = '\0';
	return (dest);
}
