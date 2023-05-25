#include "function_pointers.h"
/**
 * array_iterator - excecute a function given by parameter
 * @array: an array of element
 * @size: size of array
 * @action: action on element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
