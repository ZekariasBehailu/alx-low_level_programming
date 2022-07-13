#include "main.h"
#include <string.h>

/**
 * _strncat - concats two strings
 * @dest: destination string input
 * @src: source string input
 * @n: number of bytes
 *
 * Return: returns pointer of concated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
