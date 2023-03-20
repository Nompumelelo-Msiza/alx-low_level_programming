#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha < 64 && alpha > 91)
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
