#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - check sign
 * @void: No arguments
 *
 * Description: Create a random number and
 * check if it a positvie number,
 * negative number or zero
 * Return: 0 (Success)
 */
int main(void)
{

	/**
	 * description: check +ve,-ve,zero
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

