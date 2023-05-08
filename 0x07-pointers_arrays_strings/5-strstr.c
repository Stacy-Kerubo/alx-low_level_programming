#include "main.h"
/**
* _strstr - locate a substring in a string
* @haystack: the string to search
* @needle: the substring to locate
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n == *haystack && *n != '\0' && *haystack != '\0')
{
haystack++;
n++;
}
if (*n == '\0')
return (h);
haystack = h + 1;
}
return (NULL);
}

