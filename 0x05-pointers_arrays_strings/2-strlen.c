#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: - string to be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	int length_of_string = 0;

	while (s[length_of_string])
		length_of_string++;
	return (length_of_string);
}
