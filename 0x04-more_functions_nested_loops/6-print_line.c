#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to print _
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
		