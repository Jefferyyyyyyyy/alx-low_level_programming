#include "lists.h"

/**
 * add_nodeint_end - function adds a node at the end of a linked list
 * @head: pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: pointer to the new node
 * otherwise NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
