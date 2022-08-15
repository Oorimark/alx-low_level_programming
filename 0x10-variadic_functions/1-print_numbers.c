#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints all argument with a separator
 * @separator: seperator
 * @n: length of argument
 * @...: arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list ap;
		unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		va_end(ap);
		putchar('\n');
	}
}

