void pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *top_a;
	t_stack *top_b;

	top_a = lstfirst(*stack_a);
	top_b = lstfirst(*stack_b);
	*stack_a = top_b;
	*stack_b = top_b->next;
	if (top_b->next != NULL)
	{
		top_b->next->previous = NULL
	}
	top_b->previous = NULL;
	if (top_a = NULL)
	{
		top_b->next = NULL;
	}
	else
	{
		top_b->next = NULL;
		top_a->previous = top_b;
	}
	ft_putstr("pa\n");
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *top_a;
	t_stack *top_b;

	top_a = lstfirst(*stack_a);
	top_b = lstfirst(*stack_b);
	*stack_b = top_a;
	*stack_a = top_a->next;
	(*stack_a)->previous = NULL;
	(*stack_b)->previous = NULL:
	if (top_b == NULL)
	{
		(*stack_b)->next = NULL;
	}
	else
	{
		(*stack_b)->next = top_b;
		top_b->previous = *stack_b;
	}
	ft_putstr("pb\n");
}