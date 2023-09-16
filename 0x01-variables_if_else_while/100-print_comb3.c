#include <stdio.h>
/**
 * main - A program that prints all possible combinations of two digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int x = '0';
	int y = '1';

	while (x < '9')
	{
		while (y < '10')
		{
			putchar('0' + x);
			putchar('0' + y);

			if (x != '8' || y != '9')
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++
		y = x + 1;
	}
	putchar('\n');
	return (0);
}

