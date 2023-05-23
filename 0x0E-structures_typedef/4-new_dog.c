#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;
    int name_len, owner_len;

    /* Calculate the lengths of the name and owner strings */
    name_len = strlen(name);
    owner_len = strlen(owner);

    /* Allocate memory for the new dog struct */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for the name and owner strings */
    name_copy = malloc((name_len + 1) * sizeof(char));
    owner_copy = malloc((owner_len + 1) * sizeof(char));
    if (name_copy == NULL || owner_copy == NULL) {
        free(new_dog);
        free(name_copy);
        free(owner_copy);
        return (NULL);
    }

    /* Copy the name and owner strings */
    strcpy(name_copy, name);
    strcpy(owner_copy, owner);

    /* Initialize the new dog struct */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}

