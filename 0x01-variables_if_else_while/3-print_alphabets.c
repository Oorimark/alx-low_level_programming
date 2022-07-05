#include <stdio.h>
/**
 * main - outputs lower and upper
 *
 * description: prints lower and upper case
 * Return: returns 0
 *
 */
int main(void)
{
	char st[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

		/** print lowers */
		for (i = 0; i < 25; i++)
		{
			putchar(st[i]);
		}

		/** print upper */
		for (i = 0; i < 25; i++)
		{
			putchar(toupper(st[i]));
		}

		putchar('\n');
		return (0);
}

