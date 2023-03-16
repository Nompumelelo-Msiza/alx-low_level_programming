#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
       	double j;
	long k;
	float f;

	printf("Size of a char:%c.\n", sizeof(c));
	printf("Size of an int:%i.\n", (unsigned int)sizeof(i));
	printf("Size of a long int:%d.\n", sizeof(j));
	printf("Size of a long long int:%lu.\n", sizeof(k));
	printf("Size of a float:%d.\n", sizeof(f));
	return (0);
}
