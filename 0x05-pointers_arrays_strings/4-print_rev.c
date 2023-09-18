#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: - string reference pointer
 * Return: 0 always (success)
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
			_putchar('\n');
}

