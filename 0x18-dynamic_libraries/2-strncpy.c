#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: pointer to string array where the content is to be copied
 * @src: string to be copied
 * @n: number of characters to be copied from source
 *
 * Return: final copy of the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];
	for (; t < n; t++)
		dest[t] = '\0';
	return (dest);
}
