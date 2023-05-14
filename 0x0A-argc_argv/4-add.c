#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Adds positive numbers passed as arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of pointers to strings representing the arguments.
 * Return: 0 if success, 1 if error occurred.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
    int sum = 0;
    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }

        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return (0);
}

