#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: The character to be checked
 *
 * Return: 1 (Success) . 0 otherwise
 */

int _isalpha(int c)
{
	char low_a, low_z, upper_a, upper_z;

	low_a = 'a';
	low_z = 'z';
	upper_a = 'A';
	upper_Z = 'Z';
	if ((c <= upper_a) && (c >= upper_z))
	       	return (1);
	else if ((c <= low_a) && (c >= low_z))
		return (1);
	else
		return (0);
}
