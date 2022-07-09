#include "main.h"
int max(int [], int);
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int arr[] = {a, b, c};
	int n = 3;
	int t, i;

	t = arr[0];

	for (i = 1; i < n; i++)
	{
		if (arr[i] > t)
			t = arr[i];
	}

	return (t);
}
