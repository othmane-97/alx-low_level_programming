#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic information about a dog
 * @name: First member - Dog's name
 * @age: Second member - Dog's age
 * @owner: Third member - Dog's owner
 *
 * Description: This structure represents basic information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: This function initializes a dog structure with the given
 *              information.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to struct dog
 *
 * Description: This function prints the information about a dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to the newly created dog structure
 *
 * Description: This function creates a new dog structure and initializes its
 *              members with the given information.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to struct dog
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string
 *
 * Description: This function copies the string from source to destination.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculates the length of a string
 * @s: String
 *
 * Return: Length of the string
 *
 * Description: This function calculates the length of a string.
 */
int _strlen(char *s);
#endif /* DOG_H */
