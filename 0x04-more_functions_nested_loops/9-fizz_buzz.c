#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 always success
 */

int main(void)
{
	int i;

	for (int i = 1; i <= 100; i++)
	{
		if (((i / 3) == 1) && ((i / 5) == 1))
			printf(" %s", "FizzBuzz");
		else if ((i / 3) == 1)
			printf(" %s", "Fizz");
		else if ((i / 5) == 1)
			printf(" %s", "Buzz");
		else
		{
			if (i == 1)
				printf("%d", i);
			else
				printf(" %d", i);
		}
	}

	return (0);
}
