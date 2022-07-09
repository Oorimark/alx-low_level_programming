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
	int largest;
	int arr[] = {a,b,c};
	int n = 3;
	largest = max(arr,n);
	return (largest);

}

int max(int x[], int k)
{
	int t,i;
	t = x[0];
	for (i = 1; i < k; i++)
	{
		if (x[i] > t)
			t=x[i];
	}
	return (t);
}

