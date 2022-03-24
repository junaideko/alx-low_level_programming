#include "main.h"

/**
 * _strncat - concatenate string up to n bytes
 * @dest: pointer to string of array, large enough to hold the
 * resulting string.
 * @src: string to be appended
 * @n: maximum number of chracters to be apended
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned long int t, dest_len;

	int e;

	for (t = 0; *(dest + t) != '\0'; ++t)
		continue;

	dest_len = t;

	for (e = 0; e < n && src[e] != '\0'; e++)
		dest[dest_len + e] = src[e];

	dest[dest_len + e] = '\0';

	return (dest);
}
