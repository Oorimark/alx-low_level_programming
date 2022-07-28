#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - use argument
 * @argc: argument legnth
 * @argv: argument value
 *
 * Return: Alwasy 0
 */
int main(int argc, char *argv[])
{
	{ UNUSED(argc); }

	printf("%s\n", argv[0]);
	return (0);
}
