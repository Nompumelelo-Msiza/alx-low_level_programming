#include "main.h"

/**
 * _islower- checks for lowercase character
 *
 * Return: 1 (Success)
 */

int _islower(int c)
{
	char low_a, low_z;

	low_a = 'a';
	low_z = 'z';
	if (c <= low_z && c >= low_a)
		return (1);
	else
		return (0);
}
