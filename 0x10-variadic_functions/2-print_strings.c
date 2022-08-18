#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * prints_strings - stdout strings and a separator
 * @separator: separator
 * @n: lenght
 * @...: arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list ap;
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			char * arg = va_arg(ap, char *);
			if (arg == NULL)
				printf("nill");
			else
				printf("%s", arg);
			if (i != n -1)
				printf("%s", separator);
		}
	}
}
			

