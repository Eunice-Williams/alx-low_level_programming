#include <stdio.h>
/**
 * main - A program that prints lowercase letters except q and e
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int small_letters = 'a';

	while (small_letters <= 'z')
	{
		if (small_letters == 'e' || small_letters == 'q')
		{
			small_letters++;
		}
		else
		{
		putchar(small_letters);
		small_letters++;
		}
	}
	putchar('\n');
	return (0);
}
