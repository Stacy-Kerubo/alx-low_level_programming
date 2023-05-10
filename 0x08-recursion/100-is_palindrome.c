#include "main.h"
/**
* _strlen_recursion - Returns the length of a string
* @s: String
* Return: Length of s
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* is_palindrome - Checks if a string is a palindrome
* @s: String to check
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (check_palindrome(s, len, 0));
}
/**
* check_palindrome - Helper function to check if a string is a palindrome
* @s: String to check
* @len: Length of s
* @i: Current index of s
* Return: 1 if s is a palindrome, 0 otherwise
*/
int check_palindrome(char *s, int len, int i)
{
if (s[i] != s[len - 1])
return (0);
if (i >= len / 2)
return (1);
return (check_palindrome(s, len - 1, i + 1));
}


