#include <stdio.h>
/**
 * main - A program that prints lowercase letters in reverse
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char small_letters;

	for (small_letters = 'z'; small_letters >= 'a'; small_letters--)
		putchar(small_letters);

	putchar('\n');
	return (0);
}

