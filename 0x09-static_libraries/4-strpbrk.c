#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: byte
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *res;

	res = strpbrk(s, accept);
	return (res);
}
