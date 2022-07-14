#include <string.h>
#include "main.h"

/**
 * _strncat - concate two strings
 * @dest: first string
 * @src: second string
 * @n: lenght
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = strncat(dest, src, n);

	return (res);
}
