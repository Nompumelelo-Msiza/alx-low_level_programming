#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, num;

	num = 48;
	while (i < 10)
	{
		putchar(num);
		i++;
		num++;
	}
	putchar('\n');
	return (0);
}
