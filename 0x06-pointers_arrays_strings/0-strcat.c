#include "main.h"

/**
 * _strcat - function concatenates two strings.
 * @dest: is the pointer to the destinatione of the string array.
 * its is big enough to hold the concatenated string as well.
 * @src: is the string to be appended.
 *
 * Return: a pointer to string dest with a terminating null byte
 */
char *_strcat(char *dest, char *src)
{
	int t, e;

	for (t = 0; *(dest + t) != '\0'; t++)
		continue;

	for (e = 0; *(src + e) != '\0'; ++t, ++e)
	{
		*(dest + t) = *(src + e);
	}
	*(dest + t) = '\0';
	return (dest);
}
