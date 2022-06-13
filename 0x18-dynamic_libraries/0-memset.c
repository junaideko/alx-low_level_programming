#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: pointer to memory to be filled
 * @b: varible value to be filled
 * @n: number of bytes to be filled starting from s to be filled
 * Return: a pointer to the memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}
	return (s);
}
