#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
