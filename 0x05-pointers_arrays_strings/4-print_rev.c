#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints the reveresed string
 * @s: string input
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		if (s[i] == '\0')
			continue;
	       _putchar(s[i]);
	}

	_putchar('\n');
}
