#include "main.h"

/**
 * rot13 - using this function that encodes string
 * @s: pointer to a string
 * Return: pointer to rot13 generated string
 */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i = 0, j;

	while (c[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
