#include "main.h"

/**
 * print_square - prints a square shape
 * @size: size of the triangle
 *
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
