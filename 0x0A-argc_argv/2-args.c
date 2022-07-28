#include <stdio.h>
#define UNSUSED(x) (void)(x)

/**
 * main - prints the arguments
 * @argc: argument legnth
 * @argv: argument value
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
