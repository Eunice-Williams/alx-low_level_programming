#include <stdio.h>
/**
 * main - A program that prints numbers in base 10 using putchar()
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digit++)
		putchar((digits % 10) + '0');

	putchar('\n');

	return (0);
}

