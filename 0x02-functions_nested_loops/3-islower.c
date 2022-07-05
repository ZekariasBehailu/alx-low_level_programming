#include "main.h"

/**
 * _islower - idetifies if a character is lower case
 * @c: The character to be identified
 *
 * Return: On success 1.
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
