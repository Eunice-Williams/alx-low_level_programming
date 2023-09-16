#include <stdio.h>
/**
 * main - A program that prints all possible combinations of single-digit
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++d;

		putchar('\n');
		return (0);
	}
}

