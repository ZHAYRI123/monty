#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack.
 * @li: line number
 * @stack: stack head
 * Return: no return
 */
void _swap(stack_t **stack, unsigned int li)
{
	stack_t *ltack;
	int i = 0, x;

	ltack = *stack;

	while (ltack)
	{
		ltack = ltack->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", li);
		_free();
		exit(EXIT_FAILURE)
	}
	x = ltack->n;
	ltack->n = ltack->next->n;
	ltack->next->n = x;
	free(x);
}
