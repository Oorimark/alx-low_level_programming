#include "main.h"
/**
 * print_alphabet - prints alphabets to stdout
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	char alphas[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphas[i]);
	}

	_putchar('\n');
}

