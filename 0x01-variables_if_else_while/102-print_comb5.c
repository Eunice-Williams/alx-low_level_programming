#include <stdio.h>
/**
 * main - A program that prints two two digits
 *
 * Return:0 always (success)
 */
int main(void)
{
	int n_1 = '0';
	int n_2 = '0';
	int n_3 = '0';
	int n_4 = '0';

	while (n_1 < '9')
	{
		while (n_2 < '9')
		{
			while (n_3 < '9')
			{
				while (n_4 < '9')
				{
					if (((n_3 + n_4) > (n_1 + n_2) && n_3 >= n_1) || n_1 < n_3)
					{
						putchar(n_1);
						putchar(n_2);
						putchar(' ');
						putchar(n_3);
						putchar(n_4);

				if (n_1 + n_2 + n_3 + n_4 == '179' && n_1 == '9')
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
				num_3++;
			}
			num_2++;
		}
		num_1++;
	}
	putchar('\n');
	return (0);
}

