#include "main.h"

/**
 * print_triangle - Prints triangles using recursion
 * @size: how big the triangle is
 */
void print_triangle(int size)
{
	int i, j, k;

	j = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > 0)
		{
			i = 1;
			while ((size - i) > 0)
			{
				_putchar(' ');
				i++;
			}
			k = j;
			while (k - size > 0)
			{
				_putchar(35);
				k--;
			}
			_putchar(35);
			_putchar('\n');
			size--;
		}
	}
}
