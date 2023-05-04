#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @s: A pointer to the string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*(s++))
len++;
return (len);
}
/**
 * puts_half - Prints half of a string
 * @str: A pointer to the string to print
 *
 * Description: If the length of the string is odd,
 * the function prints the last (length - 1) / 2 characters
 * of the string. Otherwise, it prints the last length / 2
 * characters of the string.
 */
void puts_half(char *str)
{
int len = _strlen(str);
int n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
int i;
for (i = n; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}


