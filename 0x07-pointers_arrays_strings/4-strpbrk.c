#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: pointer to string to be scanned
 * @accept: pointer to string containing characters to match
 * Return: pointer to the byte in s that matches one in accept else
 * null
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (0);
}
