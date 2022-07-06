#include "main.h"

/**
 * print_sign - idetifies sign of a number
 * @n: The character to be identified
 *
 * Return: On success 1.
 */

int _abs(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
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
