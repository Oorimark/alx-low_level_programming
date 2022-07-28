#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: argument length
 * @argv: argument values
 *
 * Return: Always 0 | 1
 */
int main(int argc, char *argv[])
{
	int res;
	int i;

	res = 1;
	if (argc > 1 && argc <= 3)
	{
		for (i = 1; i < argc; i++)
		{
			res = res * atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);

	}
	else
	{
		puts("Error");
		return (1);
	}
}
