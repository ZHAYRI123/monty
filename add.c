#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * @li: line number
 * @stack: stack head
 * Return: no return
 */
void _add(stack_t **stack, unsigned int li)
{
	stack **head;
	int i = 0, p;

	head = *stack;
	while (head)
	{
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", li);
		exit(EXIT_FAILURE);
	}
	p = head->n + head->next->n;
	head->next->n = p;
	*stack = head->next;
	free(head);
}
