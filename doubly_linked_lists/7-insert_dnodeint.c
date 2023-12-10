#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: head of list
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
dlistint_t *node, *tmp = *head;
unsigned int i = 0;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);

while (i != (idx - 1))
{
if (tmp == NULL || tmp->next == NULL)
return (NULL);
tmp = tmp->next;
i++;
}
node->n = n;
node->next = tmp->next;
tmp->next = node;
return (node);
}
