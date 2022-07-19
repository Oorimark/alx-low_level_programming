#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: array of characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int len;

	len = (int) sizeof(a); 
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
