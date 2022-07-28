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

	if (argc > 1)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
	else
	{
		puts("Error");
		return (1);
	}
}
