#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all the numbers of base 16 in lowercase
*
* Return: Always(0) Success
*/

int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
