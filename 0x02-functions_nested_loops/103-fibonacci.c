#include <stdio.h>
/**
* main - Entry point
* Description: Prints the sum of even-valued terms
* in the Fibonacci sequence whose values do not exceed 4,000,000
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
int prev = 1, curr = 2, sum = 0, temp;
while (curr <= 4000000)
{
if (curr % 2 == 0)
sum += curr;
temp = curr;
curr += prev;
prev = temp;
}
printf("%d\n", sum);
return (0);
}

