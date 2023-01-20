/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:52:38 by chmassa           #+#    #+#             */
/*   Updated: 2022/12/28 11:05:01 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **lst_a, t_list **lst_b)
{
	int		to_push;
	t_list	*new;

	if (!(*lst_b))
		return ;
	to_push = (*lst_b)->data;
	new = ft_lstnew(to_push);
	ft_lstadd_front(lst_a, new);
	ft_lstdel_front(lst_b);
	write(1, "pa\n", 3);
}
