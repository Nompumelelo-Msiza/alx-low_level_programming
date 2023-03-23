#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 10 times
 */
void more_numbers(void)
{
	int c, i = 0, j, k;

	while (i < 10)
	{
		c = 0;
		while (c < 15)
		{
			j = (c / 10) + '0';
			k = (c % 10) + '0';
			if (c > 9)
			{
				_putchar(j);
			}
			_putchar(k);
			c++;
		}
	_putchar('\n');
	i++;
	}
}

