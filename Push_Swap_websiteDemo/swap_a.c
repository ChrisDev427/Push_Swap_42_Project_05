/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:39:17 by chmassa           #+#    #+#             */
/*   Updated: 2024/03/28 08:54:57 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **lst)
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
	// write(1, "sa\n", 3);
	moves++;

}
