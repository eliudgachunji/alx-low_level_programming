#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array of character and initializes a specific char
 * @size: size of array being initialized
 * @c: character to be initialized
 * Return: NULL if size = 0
 *         pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{

char *array;
unsigned int index;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;

return (array);

}
