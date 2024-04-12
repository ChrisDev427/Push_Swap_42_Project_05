/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:52:38 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:54:17 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **lst_a, t_list **lst_b)
{
	int		to_pushSimp;
	int		to_pushInit;
	t_list	*new;

	if (!(*lst_b))
		return ;
	to_pushSimp = (*lst_b)->data;
	to_pushInit = (*lst_b)->init_data;
	new = ft_lstnew(to_pushSimp, to_pushInit);
	ft_lstadd_front(lst_a, new);
	ft_lstdel_front(lst_b);
	// write(1, "pa\n", 3);
	moves++;
}
