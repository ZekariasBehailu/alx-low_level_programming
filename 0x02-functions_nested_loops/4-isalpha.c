#include "main.h"

/**
 * _isalpha - idetifies if a character is an alphabet
 * @c: The character to be identified
 *
 * Return: On success 1.
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
