#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the lenght of the list
 * @h: header pointer
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

