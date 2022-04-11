#include <stdio.h>

/**
 * main - program primes name of file it was compiled from
 * Return: always o
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
