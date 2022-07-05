#include <stdio.h>
/**
 * main -  prints loweralpha
 *
 * description: prints lowaplha
 * Return: returns 0
 */
int main(void)
{
	char st[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i= 0; i <= 26; i++)
	{
		putchar(st[i]);
	}

	putchar('\n');
	return (0);
}
