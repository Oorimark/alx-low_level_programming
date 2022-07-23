#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);
	return (res);
}
