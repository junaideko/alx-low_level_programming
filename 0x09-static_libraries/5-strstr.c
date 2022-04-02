#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (\0)
 * are not compared
 * @haystack: pointer to string to be examined
 * @needle: pointer tosubstring to be searched in string pointed to
 * by haystack
 * Return: is a pointer to the beginning of substring else null if
 * substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			}

			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
