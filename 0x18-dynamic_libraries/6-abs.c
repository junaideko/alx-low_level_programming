#include "main.h"
/**
 * _abs - function computes the aboslute value of an integer
 * @n: is a signed integer
 *
 * Return: Always positive integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (0 - n);
	}
}
