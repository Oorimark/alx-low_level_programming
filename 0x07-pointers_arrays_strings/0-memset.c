#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: first argument
 * @b: second argument
 * @n: third argument
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *res;

	res = memset(s, b, n);
	return (res);
}
