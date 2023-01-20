/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_stack100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:11:26 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/16 18:03:09 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_stack100(t_list **lsta, t_list **lstb)
{
	int	chunk;

	chunk = 20;
	while (ft_lstsize(*lstb) != 80)
	{
		while (ft_lstsize(*lstb) != chunk)
		{
			if ((*lsta)->data <= chunk)
				push_b(lsta, lstb);
			else if ((*lsta)->data > chunk)
				rotate_a(lsta);
		}
		chunk += 20;
	}
}
