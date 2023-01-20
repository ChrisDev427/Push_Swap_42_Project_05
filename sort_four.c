/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:32:04 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/14 11:30:28 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list **lsta, t_list **lstb)
{
	if (ft_lstfind_min(lsta) == 3)
		rev_rotate_a(lsta);
	if (ft_lstfind_min(lsta) == 4)
		rev_rotate_a(lsta);
	if (ft_lstfind_min(lsta) == 2)
		swap_a(lsta);
	push_b(lsta, lstb);
	sort_three(lsta);
	push_a(lsta, lstb);
}
