/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:46:28 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:55:01 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **lst)
{
	t_list	*tmp;
	int		data;
	int		init_data;

	if (!(*lst))
		return ;
	tmp = *lst;
	data = tmp->data;
	init_data = tmp->init_data;
	tmp->data = tmp->next->data;
	tmp->init_data = tmp->next->init_data;
	tmp->next->data = data;
	tmp->next->init_data = init_data;
}

void	swap_ab(t_list **lst_a, t_list **lst_b)
{
	if (!(*lst_a) || !(*lst_b))
		return ;
	swap(lst_a);
	swap(lst_b);
	// write(1, "ss\n", 3);
	moves++;

}
