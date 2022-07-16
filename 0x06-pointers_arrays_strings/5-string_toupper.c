#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - convert lower to upper
 * @ch: char
 *
 * Return: char
 */
char *string_toupper(char *ch)
{
	char temp[98];
	int i;

	for (i = 0; i < (int) strlen(ch); i++)
	{
		temp[i] = toupper(ch[i]);
	}
	ch = temp;
	return (ch);
}

