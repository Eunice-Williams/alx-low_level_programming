#include "main.h"
/**
 * puts2 - A funstion that prints xters of a string
 * @str: - string reference
 * Return: 0 always (success)
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
