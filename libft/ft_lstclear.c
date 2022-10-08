/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:59:04 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:59:05 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*sub;
	t_list	*nxt;

	if (!del || !lst || !*lst)
		return ;
	sub = *lst;
	while (sub)
	{
		nxt = sub->next;
		ft_lstdelone(sub, del);
		sub = nxt;
	}
	*lst = NULL;
}
