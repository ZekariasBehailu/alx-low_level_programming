#include "main.h"

/**
 * print_line - prints distance to the given input
 * @n: distance
 *
 */

void print_line(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar('_');

		_putchar('\n');
	}
}
