#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *res;

	res = strchr(s, c);
	return (res);
}
