#include "function_pointers.h"
/**
 * array_iterator - iterages an array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
