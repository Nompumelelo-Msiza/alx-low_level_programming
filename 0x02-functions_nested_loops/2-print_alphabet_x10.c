#include "main.h"

/**
 * print_alphabet_x10- prints lowercase alphabets x10
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i=0;

	alpha = 'a';
	while (i <= 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
