#include <string.h>
#include "main.h"

/**
 * _strcat - concate two strings
 * @dest: first string
 * @src: second string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *res = strcat(dest, src);

	return (res);
}
