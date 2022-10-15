#include "push_swap.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL|| *lst == NULL)
	{
		return ;
	}
	while (*lst == NULL)
	{
		tmp = *lst;
		(*del)((*lst)->content);
		free(*lst);
		*lst = NULL;
		*lst = tmp->next;
	}
}