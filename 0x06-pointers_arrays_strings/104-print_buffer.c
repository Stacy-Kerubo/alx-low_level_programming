#include <stdio.h>

/**
 * main - prints the value of a specific element in an array of integers
 *
 * Return: Always 0.
 */
int main(void)
{
int a[5] = {98, 402, 1024, 302, 611};
int *p;
p = &a[2];
/* write your line of code here */
printf("a[2] = %d\n", *(p));
return (0);
}

