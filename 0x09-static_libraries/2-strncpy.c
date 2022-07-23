#include <string.h>
#include "main.h"

/**
 * _strncpy - makes a copy of a string
 * @dest: first string
 * @src: seoncd string
 * @n: lenght
 *
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *res = strncpy(dest, src, n);

	return (res);
}
