#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of integers only
 * @argc: argument length
 * @argv: argument values
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res;
	int i;

	res = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (((int) atoi(argv[i])) > 0)
			{
				res = res + atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
