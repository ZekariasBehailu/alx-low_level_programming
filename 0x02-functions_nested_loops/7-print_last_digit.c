#include "main.h"

/**
 * print_last_digit - returns last digit of an intiger
 * @n: number to be calculated
 *
 * Return: return value calculated.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}