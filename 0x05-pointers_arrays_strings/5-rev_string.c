#include "main.h"
/**
 * rev_string - a function that reverses a string..
 * @s: character value.
 */
void rev_string(char *s)
{
int i;
int a = 0, b = 0;
char temp;

for (i = 0; s[i] != 0; i++)
;
b = i - 1;
while (a < b)
{
temp = s[a];
s[a] = s[b];
s[b] = temp;
a++;
b--;
}
}
