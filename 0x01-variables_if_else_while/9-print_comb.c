#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, num, space, comm;

	num = 48;
	space = 32;
	comm = 44;
	while (i < 10)
	{
		putchar(num);
		putchar(comm);
		putchar(space);
		i++;
		num++;
	}
	putchar('\n');
	return (0);
}
