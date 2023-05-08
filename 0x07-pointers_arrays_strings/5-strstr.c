#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer to string to search
 * @needle: pointer to substring to search for
 *
 * Return: pointer to beginning of located substring, or NULL if substring
 *         is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, k;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
{
;
}
if (needle[k] == '\0')
{
return (haystack + i);
}
}
return (0);
}

