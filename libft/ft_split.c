/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:50:15 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 12:50:16 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char c, char charset)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x < y)
	{
		if (c == charset)
			return (1);
		x++;
	}
	if (c == '\0')
	{
		return (1);
	}
	return (0);
}

static size_t	ft_count(char const *str, char charset)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_find(str[i + 1], charset) == 1
				&& ft_find(str[i], charset) == 0))
			words++;
		i++;
	}
	return (words);
}

static void	ft_copy(char *dest, const char *from, char charset)
{
	size_t	i;

	i = 0;
	while (ft_find(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	ft_transfer(char **tab, char const *str, char charset)
{
	size_t	i;
	size_t	j;
	size_t	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_find(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_find(str[i + j], charset) == 0)
			{
				j++;
			}
			tab[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_copy(tab[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t		word;
	char		**tab;

	if (!s)
		return (NULL);
	word = ft_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (word + 1));
	if (!tab)
		return (NULL);
	tab[word] = 0;
	ft_transfer(tab, s, c);
	return (tab);
}
