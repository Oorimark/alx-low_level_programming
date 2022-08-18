#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all item in the list
 * @h: header pointer
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d", (int) temp->n);
		printf("\n");
		temp = temp->next;
		count++;
	}
	return (count);
}
