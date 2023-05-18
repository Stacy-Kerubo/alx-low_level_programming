#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @str: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of num1 and num2
 */
char *multiply(char *num1, char *num2)
{
	int len1, len2, i, j, k, carry, n1, n2, sum;
	int *result;
	char *res;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';

			sum = (n1 * n2) + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	k = 0;
	while (k < len1 + len2 && result[k] == 0)
		k++;

	if (k == len1 + len2)
		k--;

	res = malloc((len1 + len2 - k + 1) * sizeof(char));
	if (res == NULL)
	{
		free(result);
		return (NULL);
	}

	for (i = 0; k < len1 + len2; i++, k++)
		res[i] = result[k] + '0';
	res[i] = '\0';

	free(result);
	return (res);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!_isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	result = multiply(num1, num2);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}

