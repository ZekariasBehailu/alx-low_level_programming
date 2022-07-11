#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of the array.
 * @a: integer value
 * @n: integer value
 */
void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b != (n - 1))
printf(", ");
}
printf("\n");
}
