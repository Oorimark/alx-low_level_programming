#include <ctype.h>
/**
 * _islower - checks if alpha is lower
 * @c: argument is int
 *
 * Return: int
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
