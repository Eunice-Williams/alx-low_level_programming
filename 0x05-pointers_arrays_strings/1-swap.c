#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @author Eunice
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0 always (success)
 */
void swap_int(int *a, int *b);
{
	int change;

	change = *b;
	*b  = *a;
	*a = change;
}
