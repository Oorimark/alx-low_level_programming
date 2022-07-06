#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - writes the string '_putchar'
 * @void: No arguments
 *
 * Return: 0 (success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
	return (0);
}

