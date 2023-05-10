#include "main.h"
/**
* _sqrt_helper - recursive helper function to find square root
* @n: integer to calculate the square root of
* @i: integer to check as a possible square root
*
* Return: integer square root of n or -1 if there is no natural square root
*/
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

