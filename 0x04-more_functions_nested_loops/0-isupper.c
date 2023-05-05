#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); /* c is an uppercase character */
	}
	else
	{
		return (0); /* c is not an uppercase character */
	}
}

