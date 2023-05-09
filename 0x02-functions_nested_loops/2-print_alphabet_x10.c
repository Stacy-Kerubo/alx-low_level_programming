#include "main.h"
/**
* main - Entry point
* print_alphabet_x10 - prints the lowercase alphabet 10 times, followed by a newline
* Return: Always 0
*/
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
