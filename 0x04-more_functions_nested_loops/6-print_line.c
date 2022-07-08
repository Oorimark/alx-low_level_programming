#include "main.h"
/**
 * print_line - print _ based on input
 * @n: int
 *
 * Return: void
 */
void print_line(int n)
{
	int tracker = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else{
		while (tracker < n)
		{
			_putchar('_');
			tracker++;
		}
		_putchar('\n');
	}
}

