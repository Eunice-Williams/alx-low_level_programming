#include <stdio.h>
/**
 * print_array - A function that prints n elements of arrays of integers
 *
 * @a: array input
 * @n: array length
 */
void print_array(int *a, int n)
{
	int array_index;

	for (array_index = 0; array_index < n; array_index++)
	{
		printf("%d", a[array_index]);
		if (array_index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
