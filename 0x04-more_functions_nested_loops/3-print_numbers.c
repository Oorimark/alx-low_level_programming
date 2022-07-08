#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int n = 0;

	while (n++ < 10)
	{
		_putchar("%d", n);
	}
	_putchar('\n');
}
