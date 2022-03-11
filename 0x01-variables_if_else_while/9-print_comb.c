#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digits Separated by commas and space
 *
 * Return: Always(0) Success
 */

int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
		if (k < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
