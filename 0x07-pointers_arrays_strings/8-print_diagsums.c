#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sums
 * @a: array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int first_sum;
	int second_sum;
	int tracker;
	int new_a;
	int *res;

	res = *a;
	new_a = *res;
	first_sum = 0;
	second_sum = 0;
	tracker = size;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				first_sum = first_sum + new_a[i][j];
			}
		}
	}

	for (i = 0; i < size; i++)
	{
		second_sum = second_sum + new_a[i][tracker];
		tracker--;
	}

	printf("%d, %d", first_sum, second_sum);
}

