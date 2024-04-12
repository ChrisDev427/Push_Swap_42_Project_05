/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:59:41 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/16 17:58:42 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **lsta, t_list **lstb)
{
	int	maxvalue;
	int	node_nb;

	node_nb = ft_lstfind_max(lstb);
	maxvalue = node_value(lstb, node_nb);
	while (ft_lstfind_max(lstb) != 0)
	{
		rotate_b(lstb);
		ft_pusw_print(*lsta, *lstb, RB);
		if (((*lstb)->data == maxvalue - 1)
			|| ((*lsta)->data == maxvalue - 2))
		{
			push_a(lsta, lstb);
			ft_pusw_print(*lsta, *lstb, PA);
			if ((*lsta)->data > (*lsta)->next->data)
				swap_a(lsta);
				ft_pusw_print(*lsta, *lstb, SA);
		}
	}
	push_a(lsta, lstb);
	ft_pusw_print(*lsta, *lstb, PA);
}

static void	rev_rotate(t_list **lsta, t_list **lstb)
{
	int	maxvalue;
	int	node_nb;

	node_nb = ft_lstfind_max(lstb);
	maxvalue = node_value(lstb, node_nb);
	while (ft_lstfind_max(lstb) != 0)
	{
		rev_rotate_b(lstb);
		ft_pusw_print(*lsta, *lstb, RVB);
		if (((*lstb)->data == maxvalue - 1)
			|| ((*lsta)->data == maxvalue - 2))
		{
			push_a(lsta, lstb);
			ft_pusw_print(*lsta, *lstb, PA);
			if ((*lsta)->data > (*lsta)->next->data)
				swap_a(lsta);
				ft_pusw_print(*lsta, *lstb, SA);
		}
	}
	push_a(lsta, lstb);
	ft_pusw_print(*lsta, *lstb, PA);
}

static void	back_to_stack_a(t_list **lsta, t_list **lstb)
{
	int	size;

	while (ft_lstsize(*lsta) != 19)
	{
		if ((*lstb)->next != NULL && (*lstb)->data < (*lstb)->next->data) {
			swap_b(lstb);
			ft_pusw_print(*lsta, *lstb, SB);
		}
		push_a(lsta, lstb);
		ft_pusw_print(*lsta, *lstb, PA);
	}
	while (ft_lstsize(*lstb) != 0)
	{
		size = ft_lstsize(*lstb);
		if ((*lstb)->next != NULL && (*lstb)->data < (*lstb)->next->data
			&& (*lsta)->data > (*lsta)->next->data) {
			swap_ab(lsta, lstb);
			ft_pusw_print(*lsta, *lstb, SS);
			}
		if ((*lstb)->next != NULL && (*lstb)->data < (*lstb)->next->data) {
			swap_b(lstb);
			ft_pusw_print(*lsta, *lstb, SB);
		}
		if ((*lsta)->data > (*lsta)->next->data) {
			swap_a(lsta);
			ft_pusw_print(*lsta, *lstb, SA);
		}
		if ((size - ft_lstfind_max(lstb)) >= (size / 2)) {
			rotate(lsta, lstb);
			// ft_pusw_print(*lsta, *lstb);
		}
		else if ((size - ft_lstfind_max(lstb)) < (size / 2)) {
			rev_rotate(lsta, lstb);
			// ft_pusw_print(*lsta, *lstb);
		}
	}
}

void	sort_100(t_list **lsta, t_list **lstb)
{	
	// ft_pusw_print(*lsta, *lstb);
	split_stack100(lsta, lstb);
	// ft_pusw_print(*lsta, *lstb);

	sort_stack_a_100(lsta, lstb);
	back_to_stack_a(lsta, lstb);
}
