#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[52], lower_alpha, upper_alpha;
	int i = 0;

	lower_alpha = 'a';
	upper_alpha = 'A';
	while (i < 52)
	{
		if (i < 26)
		{
			str[i] = lower_alpha++;
			putchar(str[i]);
			i++;
		}
		else
		{
			str[i] = upper_alpha++;
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
