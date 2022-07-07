#include "main.h"
#include <stdlib.h>

/**
 * print_number - Prints a number
 * @n: The number to print
 *
 * Return: none
 */
void print_number(int n)
{
char h = 45;
char o = 48;
int  i = n;


if (i / 10 == 0)
{
if (i < 0)
_putchar(h);
_putchar(abs(i) + o);
return;
}

print_number(i / 10);

o = o + (abs(i % 10));
_putchar(o);
}
