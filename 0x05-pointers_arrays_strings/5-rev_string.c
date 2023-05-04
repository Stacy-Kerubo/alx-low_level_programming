
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char tmp;
while (s[j])
j++;
j--;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}

