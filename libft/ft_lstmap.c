/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:59:40 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:59:41 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*ret;
	t_list	*list;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	list = lst;
	ret = (NULL);
	while (list)
	{
		temp = ft_lstnew(f(list->content));
		if (!temp)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, temp);
		list = list->next;
	}
	return (ret);
}
