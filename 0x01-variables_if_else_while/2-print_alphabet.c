#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	while (alpha < 64 && alpha > 91)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('a');
	return (0);
}