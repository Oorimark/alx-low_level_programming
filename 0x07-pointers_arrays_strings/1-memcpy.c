#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: numberr of bytes
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res;

	res = memcpy(dest, src, n);
	return (res);
}
