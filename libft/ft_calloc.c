/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:57:25 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:57:26 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtn;
	size_t	i;

	i = 0;
	rtn = (char *)malloc(count * size);
	if (!rtn)
		return (NULL);
	while (i < count * size)
	{
		rtn[i] = 0;
		i++;
	}
	return (rtn);
}
