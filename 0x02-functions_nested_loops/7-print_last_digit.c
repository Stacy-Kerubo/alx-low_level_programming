#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (last_digit < 0)
{
last_digit *= -1;
}
/* Print the last digit */
_putchar(last_digit + '0');
return (last_digit);
}

