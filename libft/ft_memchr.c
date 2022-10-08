/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:49:09 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 12:49:10 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	pc;
	size_t			i;

	pc = (unsigned char)c;
	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ps[i] == pc)
			return ((void *)&ps[i]);
		i++;
	}
	return (NULL);
}
