#include <stdio.h>
/**
 * main - Entry point
 *
 *Description : print lowercase alphabet in reverse using ASCII codes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
