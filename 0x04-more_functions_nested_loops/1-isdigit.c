#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if number
 * @c: must be int
 *
 * Return: int
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);

}

