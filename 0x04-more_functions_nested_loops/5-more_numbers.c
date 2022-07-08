#include "main.h"
/**
 * more_numbers - print numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	char n[20] = "01234567891011121314";
	int tracker = 0;
	int xtracker = 0;

	while (tracker < 10)
	{
		for (xtracker = 0; xtracker < 20; xtracker++)
		{
			_putchar(n[xtracker]);
		}

		_putchar('\n');
		tracker++;
	}
}
