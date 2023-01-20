/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_7to99.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:59:41 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/13 18:14:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	back_to_stack_a(t_list **lsta, t_list **lstb)
{
	while (ft_lstsize(*lstb) != 0)
	{
		if ((*lstb)->next != NULL && (*lstb)->data < (*lstb)->next->data)
			swap_b(lstb);
		push_a(lsta, lstb);
	}
}

static void	rotate(t_list **lsta, t_list **lstb)
{
	int	minvalue;
	int	node_nb;

	node_nb = ft_lstfind_min(lsta);
	minvalue = node_value(lsta, node_nb);
	while (ft_lstfind_min(lsta) != 0)
	{
		rotate_a(lsta);
		if (((*lsta)->data == minvalue + 1)
			|| ((*lsta)->data == minvalue + 2))
		{
			push_b(lsta, lstb);
			if (ft_lstsize(*lstb) > 1
				&& (*lstb)->data < (*lstb)->next->data)
				swap_b(lstb);
		}
	}
	push_b(lsta, lstb);
}

static void	rev_rotate(t_list **lsta, t_list **lstb)
{
	int	minvalue;
	int	node_nb;

	node_nb = ft_lstfind_min(lsta);
	minvalue = node_value(lsta, node_nb);
	while (ft_lstfind_min(lsta) != 0)
	{
		rotate_a(lsta);
		if (((*lsta)->data == minvalue + 1)
			|| ((*lsta)->data == minvalue + 2))
		{
			push_b(lsta, lstb);
			if (ft_lstsize(*lstb) > 1
				&& (*lstb)->data < (*lstb)->next->data)
				swap_b(lstb);
		}
	}
	push_b(lsta, lstb);
}

void	sort(t_list **lsta, t_list **lstb)
{
	int	size;

	while (ft_lstsize(*lsta) != 0)
	{
		size = ft_lstsize(*lsta);
		if (ft_lstsize(*lstb) > 1 && (*lstb)->data < (*lstb)->next->data)
			swap_b(lstb);
		if ((size - ft_lstfind_min(lsta)) >= (size / 2))
			rotate(lsta, lstb);
		else if ((size - ft_lstfind_min(lsta)) < (size / 2))
			rev_rotate(lsta, lstb);
	}
}

void	sort_7to99(t_list **lsta, t_list **lstb)
{	
	sort(lsta, lstb);
	back_to_stack_a(lsta, lstb);
}
