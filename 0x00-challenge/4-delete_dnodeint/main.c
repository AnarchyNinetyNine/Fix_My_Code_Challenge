#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * initialize_list - Initializes and populates the doubly linked list.
 *
 * @head: A pointer to the head of the list.
 */
void initialize_list(dlistint_t **head)
{
	add_dnodeint_end(head, 0);
	add_dnodeint_end(head, 1);
	add_dnodeint_end(head, 2);
	add_dnodeint_end(head, 3);
	add_dnodeint_end(head, 4);
	add_dnodeint_end(head, 98);
	add_dnodeint_end(head, 402);
	add_dnodeint_end(head, 1024);
}

/**
 * perform_deletions - Performs deletions and prints the
 * list after each deletion.
 *
 * @head: A pointer to the head of the list.
 */

void perform_deletions(dlistint_t **head)
{
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 5);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
	dlistint_t *head;

	head = NULL;
	initialize_list(&head);
	perform_deletions(&head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
	print_dlistint(*head);
	free_dlistint(head);
	return (0);
}
