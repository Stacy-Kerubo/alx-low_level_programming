#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: Buffer to store the result.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the result. If the result cannot be stored in r, return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, i, j;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	i = len1 - 1, j = len2 - 1, carry = 0;
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			carry += n1[i--] - '0';
		if (j >= 0)
			carry += n2[j--] - '0';

		if (carry > 9)
		{
			r[--size_r] = carry % 10 + '0';
			carry /= 10;
		}
		else
		{
			r[--size_r] = carry + '0';
			carry = 0;
		}
	}
	if (carry > 0)
		r[--size_r] = carry + '0';
	else if (size_r - 1 == len1 + len2 - 1)
		size_r--;
	for (i = 0; r[i]; i++)
		r[i] = r[i + size_r];
	r[i] = '\0';

	return (r);
}

/**
 * _strlen - Computes the length of a string.
 * @s: String to be computed.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s; s++)
		len++;

	return (len);
}

