/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 12:43:38 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:44:28 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **lsta, t_list **lstb)
{
	if (lst_is_sorted(lsta) == 1)
		exit (1);
	while (ft_lstsize(*lstb) != 2)
	{
		if (ft_lstfind_min(lsta) == 2)
			rev_rotate_a(lsta);
		if (ft_lstfind_min(lsta) == 3)
			rev_rotate_a(lsta);
		if (ft_lstfind_min(lsta) == 4)
			rev_rotate_a(lsta);
		if (ft_lstfind_min(lsta) == 1)
			swap_a(lsta);
		push_b(lsta, lstb);
	}
	sort_three(lsta);
	push_a(lsta, lstb);
	push_a(lsta, lstb);
}
