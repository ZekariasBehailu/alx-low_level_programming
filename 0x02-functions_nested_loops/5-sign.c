#include "main.h"

/**
 * print_sign - idetifies sign of a number
 * @n: The character to be identified
 *
 * Return: On success 1.
 */

int print_sign(int n)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
