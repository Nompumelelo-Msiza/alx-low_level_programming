#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[26], alpha;
	int i = 0;

	alpha = 'a';
	while (i < 26)
	{
		str[i] = alpha++;
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
