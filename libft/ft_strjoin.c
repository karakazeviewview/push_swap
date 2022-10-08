/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:50:44 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 12:50:45 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ps1;
	size_t	i;
	size_t	x;

	if (!s1 || !s2)
		return (NULL);
	ps1 = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ps1)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
	{
		ps1[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		ps1[i] = s2[x];
		x++;
		i++;
	}
	ps1[i] = '\0';
	return (ps1);
}
