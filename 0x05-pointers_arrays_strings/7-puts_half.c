#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: character value
 */
void puts_half(char *str)
{
int i, n;

for (i = 0; str[i] != '\0'; i++)
;
if ((i % 2) == 0)
{
for (n = i / 2; n < i; n++)
_putchar(str[n]);
}
else if ((i % 2) != 0)
{
for (n = (i + 1) / 2; n < i; n++)
_putchar(str[n]);
}
_putchar('\n');
}
