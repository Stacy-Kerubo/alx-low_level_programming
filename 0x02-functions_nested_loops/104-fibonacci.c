#include <stdio.h>
/**
* main - Entry point
* Description: prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
* The numbers should be separated by comma, followed by a space.
* Return: Always 0 (Success)
*/
void print_fibonacci(int n);
int main(void)
{
print_fibonacci(98);
printf("\n");
return 0;
}
void print_fibonacci(int n)
{
int a = 1, b = 2, c;
printf("%d, %d", a, b);
for (int i = 3; i <= n; i++) {
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
}

