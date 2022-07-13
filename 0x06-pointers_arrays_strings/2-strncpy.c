#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string from input
 * @dest: destination string input
 * @src: source string input
 * @n: number of bytes
 *
 * Return: returns pointer of copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
