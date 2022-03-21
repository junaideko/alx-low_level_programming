#include "main.h"

/**
 * swap_int- function swaps the values of two intergers
 * @a: integer one
 * @b: integer two
 *
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
