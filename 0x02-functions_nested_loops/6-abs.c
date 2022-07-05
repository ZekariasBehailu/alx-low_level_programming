#include "main.h"

/**
 * _abs - calculates absolute value of a numnet
 * @ab: number to be calculated
 *
 * Return: return value calculated.
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
