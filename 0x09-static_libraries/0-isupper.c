#include <ctype.h>
#include "main.h"
/**
 * _isupper - check uppercase
 * @c: argument must be int
 *
 * Return: int
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

