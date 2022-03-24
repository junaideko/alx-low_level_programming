#include "main.h"

/**
 * _strncat - appends the string pointed src to that pointed to dest
 * n characters long
 * @dest: pointer to destination array, large enough to hold the
 * resulting string, including the null chracter
 * @src: string to be appended
 * @n: maximum number of chars to be appended
 *
 * Return: apointer to string dest
 */
int *_strncat(char *dest, char *src, int n)
{
	int t, e;

	for (t = 0; dest[t] != '\0'; t++)
	{

	}
	for (e = 0; src[e] != '\0' && e < n; e++)
	{
		dest[t] = src[e];
		t++;
	}
	dest[t] = '\0';
	return (dest);
}
