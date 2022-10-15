t_stack *lstfirst(t_stack *stack)
{
	t_stack *first;
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		first = stack;
		stack = stack->previous;
		if (stack == NULL)
			break ;
	}
	return (first);
}