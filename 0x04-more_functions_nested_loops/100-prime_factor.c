#include <stdio.h>

/**
 * main - finds and prints the largest prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
long int i, p, fp = 612852475143;

i = 2;
while (i <= 612852475143 && fp > 1)
{
p = i;
if ((fp % p) == 0)
fp = fp / p;
else
i++;
}
printf("%ld\n", p);

return (0);
}
