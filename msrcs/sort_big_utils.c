/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:53:40 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:53:45 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

static int	stack_idx_mid(t_list *stack, int num)
{
	int			current;
	int			next;
	int			ret;
	const int	size = ft_lstsize(stack);

	ret = 1;
	while (stack->next)
	{
		current = ft_atoi(stack->content);
		next = ft_atoi(stack->next->content);
		if (num > current && num < next)
			break ;
		++ret;
		stack = stack->next;
	}
	if (ret == size)
		ret = 0;
	else if (ret >= (size + 1) / 2)
		ret = -1 * (size - ret);
	return (ret);
}

int	stack_idx_minmax(t_list *stack, int num)
{
	int			ret;
	int			x;
	const int	size = ft_lstsize(stack);

	ret = 0;
	x = stack_max(stack);
	if (num <= stack_min(stack))
		x = stack_min(stack);
	else
		++ret;
	while (stack)
	{
		if (ft_atoi(stack->content) == x)
			break ;
		++ret;
		stack = stack->next;
	}
	if (ret >= (size + 1) / 2)
		ret = -1 * (size - ret);
	return (ret);
}

void	get_min_rotate(t_list *stack_a, t_list *stack_b, int *a, int *b)
{
	int			a_pl;
	int			b_pl;
	int			num;
	int			count;
	const int	size_b = ft_lstsize(stack_b);

	count = -1;
	while (stack_b && ++count >= 0)
	{
		num = ft_atoi(stack_b->content);
		if (num < stack_min(stack_a) || num > stack_max(stack_a))
			a_pl = stack_idx_minmax(stack_a, num);
		else
			a_pl = stack_idx_mid(stack_a, num);
		b_pl = count;
		if (count >= (size_b + 1) / 2)
			b_pl = -1 * (size_b - count);
		if (b_pl == 0 || ft_abs(*a) + ft_abs(*b) > ft_abs(a_pl) + ft_abs(b_pl))
		{
			*a = a_pl;
			*b = b_pl;
		}
		stack_b = stack_b->next;
	}
}

void	rotate_same(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a >= 0 && b >= 0)
	{
		run("rr", stack_a, stack_b, min(ft_abs(a), ft_abs(b)));
		if (ft_abs(a) <= ft_abs(b))
			run("rb", stack_b, 0, ft_abs(ft_abs(a) - ft_abs(b)));
		else
			run("ra", stack_a, 0, ft_abs(ft_abs(a) - ft_abs(b)));
	}
	else
	{
		run("rrr", stack_a, stack_b, min(ft_abs(a), ft_abs(b)));
		if (ft_abs(a) <= ft_abs(b))
			run("rrb", stack_b, 0, ft_abs(ft_abs(a) - ft_abs(b)));
		else
			run("rra", stack_a, 0, ft_abs(ft_abs(a) - ft_abs(b)));
	}
}

void	rotate_diff(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a >= 0 && b < 0)
	{
		run("ra", stack_a, 0, a);
		run("rrb", stack_b, 0, ft_abs(min(a, b)));
	}
	else
	{
		run("rb", stack_b, 0, b);
		run("rra", stack_a, 0, ft_abs(min(a, b)));
	}
}
