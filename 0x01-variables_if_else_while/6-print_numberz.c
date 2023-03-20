#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[10], num;
	int i = 0;

	num = '0';
	while (i < 10)
	{
		str[i] = num++;
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
