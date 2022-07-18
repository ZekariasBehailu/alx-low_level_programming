#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area
 * @src: constant byte
 * @n: bytes from memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
