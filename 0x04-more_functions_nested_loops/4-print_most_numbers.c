#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
			c++;
		}
		else
			c++;
	}
	_putchar('\n');
}
