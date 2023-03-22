#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: value being processed
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = _abs(n) % 10;
		_putchar('n');
	}
	return (n);
}


