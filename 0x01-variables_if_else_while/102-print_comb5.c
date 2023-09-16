#include <stdio.h>
/**
 * main - A program that prints two two digits
 *
 * Return:0 always (success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar(j / 10) + '0');
				putchar(j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

