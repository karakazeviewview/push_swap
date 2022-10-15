void lstdelone(t_stack **lst)
{
	*lst = (*lst)->next;
	(*lst)->previous = NULL;
}