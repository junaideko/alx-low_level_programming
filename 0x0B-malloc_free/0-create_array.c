#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of chars and initialize it with
 * a specific char.
 * @size: size of array which is an integer
 * @c: array to initialize with
 * Return: pointer to an array or null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;

	char *s;

	s = malloc(sizeof(char) * size);

	if (size <= 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	while (i < (int) size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
