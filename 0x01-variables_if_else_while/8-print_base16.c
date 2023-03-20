#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, num, lower_alpha;

	num = 48;
	lower_alpha = 97;
	while (i < 16)
	{
		if (i < 10)
		{
			putchar(num);
			i++;
			num++;
		}
		else
		{
			putchar(lower_alpha);
			i++;
			lower_alpha++;
		}
	}
	putchar('\n');
	return (0);
}
