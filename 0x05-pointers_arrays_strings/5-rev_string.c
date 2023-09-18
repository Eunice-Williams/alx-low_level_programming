#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: the pointer pointing to the string
 * Return: 0 always (success)
 */
void rev_string(char *s)
{
	int length, a, half;
	char hold;

	for (length = 0; s[length] != '\0'; length++)
		a = 0;
	half = length / 2;

	while (half--)
	{
		hold = s[length - a - 1];
		s[length - a - 1] = s[a];
		s[a] = hold;
		a++;
	}
}
