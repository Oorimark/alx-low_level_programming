#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	char *n = "0123456789";
	int tracker = 0;

	while (tracker < 10)
	{
		_putchar(n[tracker]);
		tracker++;
	}
	_putchar('\n');
}
