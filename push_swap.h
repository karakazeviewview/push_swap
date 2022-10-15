/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsuomitsuru <matsuomitsuru@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:12:16 by matsuomitsu       #+#    #+#             */
/*   Updated: 2022/10/15 20:57:02 by matsuomitsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	int			num;
	long		index;
	void		*content;
	struct	s_list *next;
}					t_list;

#endif