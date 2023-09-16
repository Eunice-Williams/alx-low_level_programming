#include <stdio.h>
/**
 * main - A program that prints all possible combinations of 3 digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int num_1 = '0';
	int num_2 = '0';
	int num_3 = '0';

	while (num_1 <= '9')
	{
		while (num_2 <= '9')
		{
			num_3 = '0';
			while (num_3 <= '9')
			{
				if (num_1 < num_2 && num_2 < num_3)
				{
					putchar(num_1);
					putchar(num_2);
					putchar(num_3);

					if (num_1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
					num_3++;
				}
				num_2++;
			}
			num_1++;
			num_2 = '0';

		}
		putchar('\n');
		return (0);
	}


