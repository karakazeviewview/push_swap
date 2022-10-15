void lstadd_front(t_stack **lst, t_stack *new)
{
	t_stack *tmp;

	if (lst == NULL || new == NULL)
		return ;
	tmp = *lst;
	new->next = tmp;
	*lst = new;
	return ;
}