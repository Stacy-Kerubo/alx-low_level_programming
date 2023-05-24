
#include <stdio.h>
/**
 * print_name - Prints a name using a provided printing function.
 * @name: The name to be printed.
 * @f: A function pointer to a printing function.
 *
 * Description: This function takes a name and a function pointer to a printing
 * function. It checks if the name and function pointer are not NULL, and if so,
 * it calls the printing function with the name as an argument. The printing
 * function is responsible for defining the specific behavior of how the name is
 * printed.
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}


