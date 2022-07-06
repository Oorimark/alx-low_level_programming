#include "main.h"
#include "1-alphabet.h"

/**
 * print_alphabet_x10 - stdout alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		print_alphabet();
		_putchar('\n');
		n++;
	}
}
