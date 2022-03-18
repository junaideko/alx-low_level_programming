#include <stdio.h>

/**
 * main - program prints number from 1 to 100, for multiple of 3 print Fizz,
 * for mutiples of 5 print Buzz, and fo both muiples of 3 and 5,
 * print FizzBuzz.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == o)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
