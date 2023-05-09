#include <stdio.h>
/**
* print_fibonacci - Prints the first n Fibonacci numbers
* starting with 1 and 2, separated by comma and a space.
* @n: The number of Fibonacci numbers to print.
* Return: Nothing.
*/
void print_fibonacci(int n)
{
int i, n1 = 1, n2 = 2, n3;
if (n >= 1)
printf("%d", n1);
if (n >= 2)
printf(", %d", n2);
for (i = 3; i <= n; i++)
{
n3 = n1 + n2;
printf(", %d", n3);
n1 = n2;
n2 = n3;
}
printf("\n");
}
/**
* main - Calls the print_fibonacci function with n = 98.
* Return: Always 0.
*/
int main(void)
{
print_fibonacci(98);
return (0);
}

