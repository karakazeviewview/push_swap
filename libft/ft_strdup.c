/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:50:27 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 12:50:28 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		i;
	size_t		size;
	char		*rtn;

	size = 0;
	while (str[size])
		++size;
	rtn = (char *)malloc(sizeof(char) *(size + 1));
	if (!rtn)
		return (NULL);
	i = 0;
	while (str[i])
	{
		rtn[i] = str[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
