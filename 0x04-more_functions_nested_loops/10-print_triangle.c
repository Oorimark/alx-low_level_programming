#include "main.h"
/**
 * print_triangle - send traignle to stdoiut
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int tracker = 0;
	int space_tracker = size - 1;
	int numb_tracker = 1;

	if ( size <= 0)
	{
		_putchar('\n');
	}

	while (tracker < size)
	{
		int i = 0;
		int j = 0;

		while (i < space_tracker)
		{
			_putchar(' ');
			i++;
		}
		while (j < numb_tracker)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		space_tracker--;
		numb_tracker++;
		tracker++;
	}
}
