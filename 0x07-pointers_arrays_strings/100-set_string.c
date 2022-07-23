#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: first argument
 * @to: second argument
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	char res;

	memcpy((char) *to, (char) **s, sizeof(**s));
}
