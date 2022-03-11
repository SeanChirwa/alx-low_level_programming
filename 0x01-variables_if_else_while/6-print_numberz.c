#include <stdio.h>
/**
 * main - Entry point
 *
 *Description : print numbers from 0 to 10 using ASCII codes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
