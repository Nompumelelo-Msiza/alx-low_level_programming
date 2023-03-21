#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: The character to be checked
 *
 * Return: 1 (Success) . 0 otherwise
 */

int _isalpha(int c)
{
	if (((c <= 'a') && (c >= 'b')) || ((c <= 'A') && (c >= 'Z')))
		return (1);
	else
		return (0);
}
