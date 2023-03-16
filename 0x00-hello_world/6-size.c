#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i, j;
	long k;
	float f;

	printf("Size of a char:%lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int:%i.\n", (unsigned int)sizeof(i));
	printf("Size of a long int:%lu.\n", (unsigned long)sizeof(j));
	printf("Size of a long long int:%lu.\n", (unsigned long)sizeof(k));
	printf("Size of a float:%f.\n", (unsigned float)sizeof(f));
	return (0);
}
