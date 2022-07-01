#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 success
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
