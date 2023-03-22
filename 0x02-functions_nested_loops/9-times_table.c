#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if ((j * i) < 10)
			{
				_putchar((j * i) + '0');
				_putchar(',');
				_putchar(' ' + '0');
			}
			else
			{
				_putchar(((j * i) / 10) + '0');
				_putchar(((j * i) % 10) + '0');
				_putchar(',');
				_putchar(' ' + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}

