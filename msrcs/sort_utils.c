/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:53:03 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:53:32 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

int	stack_min(t_list *stack)
{
	int		min;
	int		num;

	min = ft_atoi(stack->content);
	while (stack)
	{
		num = ft_atoi(stack->content);
		if (min > num)
			min = num;
		stack = stack->next;
	}
	return (min);
}

int	stack_max(t_list *stack)
{
	int		max;
	int		num;

	max = ft_atoi(stack->content);
	while (stack)
	{
		num = ft_atoi(stack->content);
		if (max < num)
			max = num;
		stack = stack->next;
	}
	return (max);
}

int	min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}
