#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: is a string pointer string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int l = 1, sum + 0;

	char temp = s[0];

	while (temp != '\0')
	{
		temp = s[l++];
		sum++;
	}
	return (sum);
}
