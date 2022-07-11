#include "main.h"
/**
 * _atoi - convert string to integer.
 *@s : character value.
 *
 * Return: n.
 */
int _atoi(char *s)
{
int i;
int n = 0;
int test = 1;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
i++;
if (s[i] == '-')
test = -test;
if (s[i] >= '0' && s[i] <= '9')
n = (10 * n) +test * (s[i] - '0');
else if (n)
break;
}
return (n);
}
