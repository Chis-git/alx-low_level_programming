#include "lists.h"

/**
 * add_nodeint - Adds a new node at thr beginning of a listint_t list.
 * @h: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: if the function fails - NULL. Otherwise - the address of the new elements.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
