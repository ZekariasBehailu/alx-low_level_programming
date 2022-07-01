#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 success
 */
int main(void)
{
	char i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if(i + j != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
