#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter = 97;  /* ASCII value of lowercase 'a' */
while (letter <= 122)  /* ASCII value of lowercase 'z' */
{
if (letter != 101 && letter != 113)  /* exclude 'e' and 'q' */
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
