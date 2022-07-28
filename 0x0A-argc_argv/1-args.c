#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the number of arguments
 * @argc: argument length
 * @argv: argument value
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	{ UNUSED(argv); }
	printf("%d\n", argc - 1);
	return (0);
}
