#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 *
 * @b: int allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
