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
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
