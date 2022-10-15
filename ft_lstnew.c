/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsuomitsuru <matsuomitsuru@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:17:32 by matsuomitsu       #+#    #+#             */
/*   Updated: 2022/10/14 16:27:14 by matsuomitsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizepf(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
