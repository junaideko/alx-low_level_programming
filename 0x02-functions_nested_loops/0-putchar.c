#include "main.h"
/**
 * main - program prints putchar followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	
	return (0);
}
