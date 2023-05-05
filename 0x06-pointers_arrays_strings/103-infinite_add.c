#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result or 0 if result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, len_sum, carry, i, j;
    char *p1, *p2;

    len1 = strlen(n1);
    len2 = strlen(n2);
    len_sum = len1 > len2 ? len1 + 1 : len2 + 1;

    if (len_sum > size_r)
        return (0);

    p1 = n1 + len1 - 1;
    p2 = n2 + len2 - 1;
    carry = 0;

    for (i = 0, j = 0; i < len_sum - 1; i++, j++)
    {
        if (j < len1)
            carry += *(p1 - j) - '0';

        if (j < len2)
            carry += *(p2 - j) - '0';

        *(r + len_sum - i - 2) = (carry % 10) + '0';
        carry /= 10;
    }

    if (carry)
    {
        if (i == size_r - 1)
            return (0);

        *(r + len_sum - i - 2) = carry + '0';
        *(r + len_sum - i - 1) = '\0';
    }
    else
    {
        *(r + len_sum - i - 1) = '\0';
    }

    for (i = 0; i < len_sum / 2; i++)
    {
        *(r + i) ^= *(r + len_sum - i - 2);
        *(r + len_sum - i - 2) ^= *(r + i);
        *(r + i) ^= *(r + len_sum - i - 2);
    }

    return (r);
}

