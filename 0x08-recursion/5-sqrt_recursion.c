#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_recursion - square root of a number
 * @n: integer
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	double res;

	res = (double) n;
	return ((int) sqrt(res));
}
