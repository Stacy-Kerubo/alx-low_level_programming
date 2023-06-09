#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to calculate the square root of.
 *
 * Return: Integer square root of n, or -1 if there is no natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return sqrt_helper(n, 0);
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: Number to calculate the square root of.
 * @guess: Current guess for the square root.
 *
 * Return: Integer square root of n, or -1 if there is no natural square root.
 */
int sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess;

    if (guess * guess > n)
        return -1;

    return sqrt_helper(n, guess + 1);
}

