#include <stdio.h>
/**
 * main - A program that prints all possible combinations of single-digit
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;

		putchar('\n');
		return (0);
	}
}

