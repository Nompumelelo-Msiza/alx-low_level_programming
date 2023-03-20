#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, rev_alpha;

	rev_alpha = 122;
	while (i < 26)
	{
		putchar(rev_alpha);
		i++;
		rev_alpha--;
	}
	putchar('\n');
	return (0);
}
