/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:58:28 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:58:31 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa3(char *dest, int n, int count, int s)
{
	while (count > 0)
	{
		dest[s] = n / count + '0';
		n = n % count;
		count = count / 10;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}

static char	*ft_itoa2(int n, char *dest)
{
	int	count;
	int	i;
	int	s;

	count = 1;
	s = 0;
	if (n < 0)
	{
		dest[s] = '-';
		s++;
		if (n == -2147483648)
		{
			dest[s] = '2';
			s++;
			n = -147483648;
		}
		n = -n;
	}
	i = n;
	while (i > 9)
	{
		i = i / 10;
		count = count * 10;
	}
	return (ft_itoa3(dest, n, count, s));
}

char	*ft_itoa(int n)
{
	int		size;
	int		temp;
	char	*dest;

	size = 0;
	if (n == 0)
		size = 1;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	if (n < 0)
		size++;
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	return (ft_itoa2(n, dest));
}
