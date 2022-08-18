#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add items to the list
 * @head: head pointer
 * @n: value
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		new_node = *head;
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		temp = malloc(sizeof(listint_t));
		temp->next = *head;
		temp->n = n;
		*head = temp;
	}
	return (*head);
}
