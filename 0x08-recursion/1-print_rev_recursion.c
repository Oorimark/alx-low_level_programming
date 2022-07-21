#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string | value
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int tracker;
	int len;
	
	len = strlen(s);
	tracker = 0;
	while (tracker++ < len)
	{
		printf("%c", s[len - tracker]);
	}
}
	
