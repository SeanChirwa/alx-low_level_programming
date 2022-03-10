#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	write(1, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
=======
	fwrite(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
>>>>>>> f5cdc0f6dae3d841fdf51c611be1f38ac8b7acbb
	return (1);
}
