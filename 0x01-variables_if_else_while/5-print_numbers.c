#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit=0;
	while (digit<=9)
	{
		printf("%d",digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
