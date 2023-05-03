#include "main.h"
/**
 * _islower - checks whether a given character is lowercase or not
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 * /
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
{
    return (1); /* c is lowercase */
  }
  return (0); /* c is not lowercase */
}
