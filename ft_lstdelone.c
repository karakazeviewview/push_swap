#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
