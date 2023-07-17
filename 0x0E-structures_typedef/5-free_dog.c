#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to struct dog
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
