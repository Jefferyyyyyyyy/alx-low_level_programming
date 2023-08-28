#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: integer to store in the new node
 *
 * Return: pointer to the new node (new element)
 * otherwise NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
