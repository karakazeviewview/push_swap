void ft_lstadd_back(list_t **lst, list_t *new)
{
	if (lst == NULL || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	t_list *ptr;
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}