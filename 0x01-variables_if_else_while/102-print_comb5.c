#include <stdio.h>
/**
 * main - A program that prints two two digits
 *
 * Return:0 always (success)
 */
int main(void)
{
	int n1 = '0';
	int n2 = '0';
	int n3 = '0';
	int n4 = '0';

	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				while (n4 <= '9')
				{
					if (((n3 + n4) > (n1 + n2) && n3 >= n1) || n1 < n3)
					{
						putchar(n1);
						putchar(n2);
						putchar(' ');
						putchar(n3);
						putchar(n4);

				if (n1 + n2 + n3 + n4 == '179' && n1 == '9')
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}

