#include <stdio.h>
/**
 * main - A program that prints all possible combinations of two digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			if (!(x > y)  ||  x == y)
			{
				putchar(x);
				putchar(y);
				if (x == '8' || y == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = '0'
		x++;
	}
return (0);
}


