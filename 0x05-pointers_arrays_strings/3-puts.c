#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: - pointer to the string
 * Return: string and a newline
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
