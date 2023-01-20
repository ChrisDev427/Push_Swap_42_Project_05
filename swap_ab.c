/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:46:28 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:39:00 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **lst)
{
	t_list	*tmp;
	int		x;

	if (!(*lst))
		return ;
	tmp = *lst;
	x = tmp->data;
	tmp->data = tmp->next->data;
	tmp->next->data = x;
}

void	swap_ab(t_list **lst_a, t_list **lst_b)
{
	if (!(*lst_a) || !(*lst_b))
		return ;
	swap(lst_a);
	swap(lst_b);
	write(1, "ss\n", 3);
}
