#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	i = n;
	if (n > 0)
	{
		while (n > 0)
		{
			j = n;
			while ((i - j) > 0)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			n--;
		}
	}
	else
		_putchar('\n');

}
