#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the structure dog
 * @d: pointer to structure dog
 *
 */

void free_dog(dog_t *d)
{
if (d)
{
return;
free(d);
}
}
