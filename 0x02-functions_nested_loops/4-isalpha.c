#include "main.h"
/**
 * _isalpha - checks whether a given character is an alphabetic character
 *            or not.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	return (0); /* c is not an alphabetic character */
}

