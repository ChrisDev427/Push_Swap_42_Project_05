/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_stack500.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:50:58 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/16 18:04:18 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_stack500(t_list **lsta, t_list **lstb)
{
	int	chunk;

	chunk = 50;
	while (ft_lstsize(*lstb) != 450)
	{
		while (ft_lstsize(*lstb) != chunk)
		{
			if ((*lsta)->data <= chunk)
				push_b(lsta, lstb);
			else if ((*lsta)->data > chunk)
				rotate_a(lsta);
		}
		chunk += 50;
	}
}
