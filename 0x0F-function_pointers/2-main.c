#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if alse, something else otherwise.
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive -check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if alse, something else otherwise.
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if alse, something else otherwise.
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[20];
	int arr_1[10] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2};
	int arr_2[10] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 9};
	int concat_index;
	int index;
	int i;

	concat_index = 0;
	for (i = 0; i < 10; i++)
	{
		array[concat_index] = arr_1[i];
		concat_index++;
	}
	for (i = 0; i < 10; i++)
	{
		array[concat_index] = arr_2[i];
		concat_index++;
	}

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);
	return (0);
}

