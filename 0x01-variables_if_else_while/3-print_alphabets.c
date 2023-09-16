#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase and uppercase
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int small_letters;
	int big_letters;

	small_letters = 'a';
	big_letters = 'A';
	while (small_letters <= 'z')
	{
		putchar(small_letters);
		small_letters++;
	}
	while (big_letters <= 'Z')
	{
		putchar(big_letters);
		big_letters++;
	}
	putchar('\n');
	return (0);
}

