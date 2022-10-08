/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:55:51 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/10/08 01:55:54 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# define BUFFER_SIZE 5

# include "../libft/libft.h"

int		split_argv(char ***strs, char **argv, char *sep);
int		is_valid(char **strs);
int		is_sorted(t_list *stack);
void	run(char *str, t_list **stack_1, t_list **stack_2, int x);
void	sort(t_list **stack);
int		stack_min(t_list *stack);
int		stack_max(t_list *stack);
int		min(int a, int b);
int		stack_idx_minmax(t_list *stack, int num);
void	get_min_rotate(t_list *stack_a, t_list *stack_b, int *a, int *b);
void	rotate_same(t_list **stack_a, t_list **stack_b, int a, int b);
void	rotate_diff(t_list **stack_a, t_list **stack_b, int a, int b);
char	*get_next_line(char **str);

#endif
