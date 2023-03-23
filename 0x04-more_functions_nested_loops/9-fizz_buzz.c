#include <stdio.h>

/**
 *  main - prints numbers 1 to 100 with multiplies of 3 and 5
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1, mul3, mul5;

	while (i <= 100)
	{
		mul3 = i % 3;
		mul5 = i % 5;
		if (mul3 == 0 && mul5 == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		else if (mul5 == 0)
		{
			printf("Buzz ");
			i++;
		}
		else if (mul3 == 0)
		{
			printf("Fizz ");
			i++;
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");
	return (0);
}
