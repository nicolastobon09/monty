#include "monty.h"
/**
 * _div - function div two number
 * @stack: Stack list
 * @line_number: Number of the line
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *curerent = NULL;
	int div = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	curerent = *stack;
	div = curerent->next->n / curerent->n;
	curerent->next->n = div;
	_pop(stack, line_number);

}

/**
 * _mul - multiplies the second top with the top element.
 * @stack: Stack.
 * @line_number: Number of line
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int mul = 0;

	if (!current || !current->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	mul = current->next->n * current->n;
	current->next->n = mul;
	_pop(stack, line_number);
}
