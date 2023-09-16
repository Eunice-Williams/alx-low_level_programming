#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int small_letters;

	small_letters = 'a';

	if (small_letters <= 'z')
		putchar(small_letters);
	small_letters++;

	putchar("\n");
	return (0);
}

