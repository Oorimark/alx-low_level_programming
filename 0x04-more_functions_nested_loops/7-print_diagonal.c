#include "main.h"
/**
 * print_diagonal - print diagnoally
 * @n: must be int
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int tracker = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (tracker < n)
		{
			int xtracker = 0;

			while (xtracker < tracker)
			{
				_putchar(' ');
				xtracker++;
			}
			_putchar('\\');
			_putchar('\n');
			tracker++;
		}
	}
}
