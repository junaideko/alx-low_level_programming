#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms, followed
 * by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, t1 = 1, t2 = 2, sum = 0, tsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((t2 % 2 == 0) && (t2 <= 4000000))
		{
			tsum = tsum + t2;
		}
		sum = t1 + t2;
		t1 = t2;
		y2 = sum;
	}
	printf("%ld\n", tsum);
	return (0);
}
