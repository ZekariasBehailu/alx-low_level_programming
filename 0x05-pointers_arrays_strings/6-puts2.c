#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: string input
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= strlen(str); i+2)
	{
		if (s[i] == '\0')
			continue;
	       _putchar(s[i]);
	}

	_putchar('\n');
}
