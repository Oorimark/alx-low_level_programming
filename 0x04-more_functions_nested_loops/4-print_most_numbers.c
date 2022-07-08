#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints all numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char n[10] = "01356789";
	int tracker = 0;

	while (tracker < 10)
	{
		_putchar(n[tracker]);
		tracker++;
	}

	putchar('\n');
}
