/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:54:14 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:54:21 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **lst_a, t_list **lst_b)
{
	int		to_pushSimp;
	int		to_pushInit;
	t_list	*new;

	if (!(*lst_a))
		return ;
	to_pushSimp = (*lst_a)->data;
	to_pushInit = (*lst_a)->init_data;
	new = ft_lstnew(to_pushSimp, to_pushInit);
	ft_lstadd_front(lst_b, new);
	ft_lstdel_front(lst_a);
	// write(1, "pb\n", 3);
	moves++;

}
