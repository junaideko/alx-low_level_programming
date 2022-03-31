#include "main.h"

/**
 * _sqrt - function returns the square root of a number
 * @n: the number to find its square root
 * @i: is an integer
 * Return: square root else -1 if number does not have square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find its square root
 * Return: square root of number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
