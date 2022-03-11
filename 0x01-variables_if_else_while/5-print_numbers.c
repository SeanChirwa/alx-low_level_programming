#include <stdio.h>

/**
 *main - entry point
 *
 *Description : prints all single digit numbers of base 10 starting from 0
 *
 *Return: Always zero (successful)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}

	putchar('\n');

	return (0);
}
