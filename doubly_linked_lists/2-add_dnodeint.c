#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add element
 * @head: pointer to head
 * @n: number
 * Return: whole list with new value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node->n = n;
	if (node == NULL)
		return (NULL);
	if ((*head) == NULL)
		*head = node;
	else
		node->next = *head;
	*head = node;
	return (node);
}
