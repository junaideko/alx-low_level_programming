#include "main.h"

/**
 * reverse_array - function reverses an array
 * @a: pointer to the array
 * @n: an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
