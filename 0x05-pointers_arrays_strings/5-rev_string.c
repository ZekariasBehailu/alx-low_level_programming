#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints the reveresed string
 * @s: string input
 *
 */

void rev_string(char *s)
{
	int i;
	int n = strlen(s);
	char str[n] = null;

	for (i = strlen(s); i >= 0; i--)
	{
		if (s[i] == '\0')
			continue;
	       str[i] = s[i];
	}
}
