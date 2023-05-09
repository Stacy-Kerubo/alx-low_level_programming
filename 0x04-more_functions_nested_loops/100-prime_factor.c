#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
long int n = 612852475143;
long int i;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
while (n % i == 0)
{
n = n / i;
}
if (n == 1)
{
printf("%ld\n", i);
break;
}
}
}
return (0);
}

