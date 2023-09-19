#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: - number to be worked on
 *
 * Return: value of the last number
 */
int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
