#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[100] = "Hello ";
char s2[] = "world!";
char *ptr;
ptr = _strcat(s1, s2);
printf("%s\n", ptr);
return (0);
}


