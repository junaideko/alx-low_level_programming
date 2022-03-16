#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is a digit of any combination
 *
 * Return: Always the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit)
	}
	_putchar(0 + lastDigit);
	return (lastDigit);
}
