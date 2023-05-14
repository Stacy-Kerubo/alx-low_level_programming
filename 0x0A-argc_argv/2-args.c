#include "stdio.h"
/**
* main - Prints all arguments received
* @argc: Number of command-line arguments
* @argv: Array of pointers to strings representing arguments
* Return: Always 0
*/
int main(int __attribute__((unused)) argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return(0); 
}
