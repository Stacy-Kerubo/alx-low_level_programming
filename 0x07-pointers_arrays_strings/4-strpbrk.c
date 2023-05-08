#include "main.h"
/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: Pointer to the string to be searched.
* @accept: Pointer to the string containing the bytes to be searched for.
*
* Return: Pointer to the byte in s that matches one of the bytes in accept,
*         or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
char *ptr_accept;
while (*s)
{
ptr_accept = accept;
while (*ptr_accept)
{
if (*s == *ptr_accept)
return (s);
ptr_accept++;
}
s++;
}
return (NULL);
}

