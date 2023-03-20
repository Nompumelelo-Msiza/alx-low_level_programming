#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, num;

	num = 0;
	while (i < 10)
	{
		printf("%d", num);
		i++;
		num++;
	}
	printf("\n");
	return (0);
}
