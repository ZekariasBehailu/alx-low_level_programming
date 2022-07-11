#include "main.h"
/**
 * _strcpy -  a function that copies the string.
 * @dest : character value
 * @src  : character value
 *
 *Return: return the pointer to desk.
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
