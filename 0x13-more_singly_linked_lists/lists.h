/**
 * struct lisints - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
typedef long unsigned int size_t;
size_t print_listint(const listint_t *h);
