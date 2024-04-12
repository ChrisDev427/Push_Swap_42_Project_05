/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 07:35:14 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:41:32 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **lst)
{
	if (!(*lst))
		return ;
	if ((*lst)->next->data > (*lst)->next->next->data
		&& (*lst)->data < (*lst)->next->data)
		rev_rotate_a(lst);
	if ((*lst)->data > (*lst)->next->next->data)
		rotate_a(lst);
	if ((*lst)->data > (*lst)->next->data)
		swap_a(lst);
}
