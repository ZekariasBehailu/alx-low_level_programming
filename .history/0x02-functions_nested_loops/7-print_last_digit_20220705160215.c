#include "main.h"

/**
 * _abs - calculates absolute value of a numnet
 * @ab: number to be calculated
 *
 * Return: return value calculated.
 */

int print_last_digit(int n)
{
    if (n < 0)
        n = -n;

    return (n % 10);
}