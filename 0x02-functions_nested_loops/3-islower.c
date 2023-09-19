#include "main.h"
/**
 * _islower - checks for lowercase alphabets
 * @c: character to be checked
 *
 * Return: 1 for lowercase alphabets 0r 0 for something else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
