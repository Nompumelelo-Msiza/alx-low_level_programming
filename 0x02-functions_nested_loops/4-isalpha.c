#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: The character to be checked
 *
 * Return: 1 (Success) . 0 otherwise
 */

int _isalpha(int c)
{
	char low_a, low_z, up_A, up_Z;

	low_a = 'a';
	low_z = 'z';
	up_A = 'A';
	up_Z = 'Z';
	if (((c <= 'a') && (c >= 'b')) || ((c <= 'A') && (c >= 'Z')))
		return (1);
	else
		return (0);
}
