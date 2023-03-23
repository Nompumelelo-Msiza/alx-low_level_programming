#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	j = size;
	if (size > 0)
	{
		while (size > 0)
		{
			i = 0;
			while (i < j)
			{
				_putchar(35);
				i++;
			}
			size--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
