#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int digits;
	char small_letters;

	for (digits = 0; digits < 10; digits++)
		putchar((digits % 10) + '0');

	for (small_letters = 'a'; small_letters <= 'f'; small_letters++)
		putchar(small_letters);

	putchar('\n');
	return (0);
}

