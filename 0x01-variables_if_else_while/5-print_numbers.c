#include <stdio.h>
/**
 * main - A program that prints all numbers in base 10
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int digits;

	while (digits < 10)
	{
		printf("%d", digits);
		digits++;
	}
	printf('\n');
	return (0);
}

