void ra(t_stack **stack, bool both)
{
	t_stack *top;
	t_stack *last;

	top = lstfirst(*stack);
	last = lstlast(*stack);
	top->next->previous = NULL;
	*stack = top->next;
	top->next = NULL;
	last->next = top;
	top->previous = last;
	if (!both)
		ft_putstr("ra\n");
}

void rb(t_stack **stack, bool both)
{
	t_stack *top;
	t_stack *last;

	top = lstfirst(*stack);
	last = lstlast(*stack);
	top->next->previous = NULL;
	*stack = top->next;
	top->next = NULL;
	last->next = top;
	top->previous = last;
	if (!both)
	{
		ft_putstr("rb\n");
	}
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, true);
	rb(stack_b, true);
	ft_putstr("rr\n");
	return ;
}