t_stack *lstlast(t_stack *lst)
{
	t_stack *last;

	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		last = lst;
		lst = lst->next;
		if (lst == NULL)
			break;
	}
	return (last);
}